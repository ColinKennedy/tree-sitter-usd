// Copyright (C) 2023 Colin Kennedy
// This file is part of tree-sitter-usd <https://github.com/ColinKennedy/tree-sitter-usd>.
//
// tree-sitter-usd is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// tree-sitter-usd is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with tree-sitter-usd.  If not, see <http://www.gnu.org/licenses/>.


module.exports = grammar(
    {
        name: "usd",

        extras: $ => [
            $.comment,
            /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
        ],

        rules: {
            module: $ => repeat($._statement),

            _statement: $ => choice(
                $.attribute_assignment,
                $.attribute_declaration,
                $.comment,
                $.metadata,
                $.prim_definition,
                $.relationship_assignment,
                $.relationship_declaration,
            ),

            comment: $ => token(
                // Comments in USD can be ``# foo``, ``// bar`` or ``/* fizz */``.
                // Everything but ``#`` is rare. The ``/* */`` form does not
                // nest and, because it cannot span tokens, shows up in places a
                // line comment cannot - e.g. ``post curve/* here */(1.1, -1.4)``.
                //
                choice(
                    seq("#", /.*/),
                    seq("//", /.*/),
                    seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
                )
            ),

            prim_type: $ => choice("class", "def", "over"),
            prim_definition: $ => seq(
                $.prim_type,
                optional($.identifier),
                $.string,
                optional($.metadata),
                $.block,
            ),
            block: $ => seq(
                "{",
                repeat(
                    choice(
                        $.prim_definition,

                        // Most USD files use these
                        $.attribute_assignment,
                        $.relationship_assignment,
                        $.variant_set_definition,

                        // Useful for USD schema files
                        $.attribute_declaration,
                        $.relationship_declaration,
                    )
                ),
                "}",
            ),

            custom: $ => "custom",
            uniform: $ => "uniform",

            _attribute_left_side: $ => seq(
                optional($.orderer),
                optional($.custom),
                optional($.uniform),
                $.attribute_type,
                choice($.qualified_identifier, $.identifier),
            ),

            attribute_property: $=> choice("connect", "spline", "timeSamples"),

            attribute_declaration: $ => prec.left(
                2,
                seq(
                    $._attribute_left_side,
                    optional(seq(".", $.attribute_property)),
                    optional($.metadata),
                    optional(";"),  // Rare but attributes can end in a ";"
                ),
            ),

            // ``.spline`` and ``.timeSamples`` each take one specific kind of
            // "{}" body. Pairing the property with its body here is what keeps
            // an empty ``{}`` from being ambiguous between the two.
            //
            attribute_assignment: $ => seq(
                $._attribute_left_side,
                choice(
                    seq(
                        ".",
                        alias($._spline_property, $.attribute_property),
                        "=",
                        attribute_right_side($, $.spline),
                    ),
                    seq(
                        ".",
                        alias($._timeSamples_property, $.attribute_property),
                        "=",
                        attribute_right_side($, $.timeSamples),
                    ),
                    seq(
                        optional(
                            seq(
                                ".",
                                alias($._connect_property, $.attribute_property),
                            ),
                        ),
                        "=",
                        attribute_right_side(
                            $,
                            choice(
                                $.array_edit,
                                $.list,
                                $._attribute_value,
                                $.None,
                            ),
                        ),
                    ),
                ),
            ),

            _connect_property: $ => "connect",
            _spline_property: $ => "spline",
            _timeSamples_property: $ => "timeSamples",

            relationship_declaration: $ => prec.left(
                2,
                seq(
                    $.relationship_type,
                    choice($.qualified_identifier, $.identifier),
                    optional($.metadata),
                )
            ),

            relationship_assignment: $ => prec.left(
                2,
                seq(
                    optional($.orderer),
                    $.relationship_type,
                    choice($.qualified_identifier, $.identifier),
                    "=",
                    choice($.prim_paths, $.prim_path, $.None),
                    optional($.metadata),
                ),
            ),

            relationship_type: $ => "rel",

            variant_set_definition: $ => seq(
                "variantSet",
                $.string,
                "=",
                "{",
                repeat($.variant),
                "}"
            ),

            variant: $ => seq(
                $.string,
                optional($.metadata),
                $.block,
            ),

            metadata: $ => seq(
                "(",
                // Note: In USD, SdfLayer::SetComment is written as a raw, string literal
                repeat(choice($.metadata_assignment, $.string)),
                ")",
            ),
            metadata_assignment: $ => seq(
                optional($.orderer),
                $.identifier,
                "=",
                choice($.list_proxy, $.list, $._metadata_value),
            ),

            // Reference: https://openusd.org/release/api/sdf_page_front.html
            //
            // Allows ``foo` and ``foo[]`` as a syntax.
            //
            attribute_type: $ => choice(seq($._identifier, "[]"), $._identifier),

            // TODO: See if I can simplify values so that _metadata_value and
            // _attribute_value just become the same
            //
            _base_value: $ => choice(
                $.None,
                $.bool,
                $.float,
                $.integer,
                $.prim_path,
                $.string,
                $.tuple,
            ),
            _metadata_value: $ => choice(
                $.arc_path,
                $.dictionary,
                $.relocates,
                $._base_value,
            ),
            _attribute_value: $ => choice($.asset_path, $._base_value),
            dictionary: $ => prec(
                3,
                seq(
                    "{",
                    repeat(
                        seq(
                            choice(
                                $._inner_dictionary_assignment,
                                $._inner_attribute_assignment,
                            ),
                            // Entries are separated by a newline or a ";". The
                            // ";" is what a spline knot's metadata uses, e.g.
                            // ``{ string a = "yes"; int b = 4 }``.
                            optional(";"),
                        ),
                    ),
                    "}",
                )
            ),
            None: $ => "None",
            // Both capital and undercase ``bool`` are accepted
            bool: $ => choice("False", "True", "false", "true"),
            float: $ => choice(
                // A float has to be at least ``5.`` or ``.5``
                // Other formats include ``-.5``, ``.5``, ``1.2e+10``,``3.4e-10``, etc.
                //
                /-?\d*\.\d+(e[-+]?\d+(\.\d*)?)?/,
                /-?\d+\.(\d+)?(e[-+]?\d+(\.\d*)?)?/,
                "inf",  // Short for "infinity"
                "-inf",  // Short for "negative infinity"
                /[-]?\d+e[-+]?\d+(\.\d*)?/,
            ),
            _identifier: $ => /[a-zA-Z0-9_]+/i,
            identifier: $ => $._identifier,
            // Note:
            //     Scopes grow like this:
            //
            //     Given a variable like foo:bar:fizz:buzz
            //
            //     foo:bar:fizz : buzz
            //     foo:bar : fizz
            //     foo : bar
            //
            qualified_identifier: $ => prec.left(
                5,
                seq(
                    optional(
                        field(
                            "scope",
                            choice(
                                alias($.qualified_identifier, $.namespace_identifier),
                                alias($.identifier, $.namespace_identifier)
                            ),
                        ),
                    ),
                    ":",
                    field(
                        "name",
                        $.identifier,
                    ),
                )
            ),

            integer: $ => /-?\d+/,
            list_proxy: $ => seq("[", comma_separated($.arc_path), optional(","), "]"),
            list: $ => prec(
                2,
                seq(
                    "[",
                    choice(
                        comma_separated($.tuple),
                        comma_separated($._attribute_value),
                    ),
                    optional(","),
                    "]",
                ),
            ),
            tuple: $ => seq("(", comma_separated($._attribute_value), optional(","), ")"),

            // String related types and components
            string: $ => choice(
                $._double_quote_literal,
                $._double_multi_literal,
                $._single_quote_literal,
                $._single_multi_literal,
            ),
            _double_quote_literal: $ => seq(
              '"',
              repeat(choice($._double_string_content, $._escape_sequence1)),
              '"',
            ),
            _double_multi_literal: $ => prec.right(
                seq(
                    '"""',
                    repeat(choice($._double_string_content, $._escape_sequence1, '"')),
                    '"""',
                )
            ),
            _single_quote_literal: $ => seq(
              "'",
              repeat(choice($._single_string_content, $._escape_sequence1)),
              "'",
            ),
            _single_multi_literal: $ => prec.right(
                seq(
                    "'''",
                    repeat(choice($._single_string_content, $._escape_sequence1, "'")),
                    "'''",
                )
            ),
            // Workaround to https://github.com/tree-sitter/tree-sitter/issues/1156
            // We give names to the token_ constructs containing a regexp
            // so as to obtain a node in the CST.
            //
            _double_string_content: _ => token.immediate(prec(1, /[^"\\]+/)),
            _single_string_content: _ => token.immediate(prec(1, /[^'\\]+/)),
            _escape_sequence1: $ => choice(
              prec(2, token.immediate(seq('\\', /[^abfnrtvxu'\"\\\?]/))),
              prec(1, $._escape_sequence),
            ),
            _escape_sequence: _ => token.immediate(
              seq(
                '\\',
                choice(
                  /[^xu0-7]/,
                  /[0-7]{1,3}/,
                  /x[0-9a-fA-F]{2}/,
                  /u[0-9a-fA-F]{4}/,
                  /u\{[0-9a-fA-F]+\}/,
                  /U[0-9a-fA-F]{8}/,
                )
              )
            ),

            // Special types
            _dictionary_type: $ => alias("dictionary", $.attribute_type),
            // ``references = <>`` and ``payload = <>`` are how a layer drops an
            // arc that a weaker layer introduced, so the empty path is allowed
            // here as well as in ``relocate``.
            //
            // Written out rather than routed through a shared helper rule. A
            // helper would be a nonterminal of its own and its reduction would
            // clash with the ``prim_path`` that ``_base_value`` already offers
            // in this position.
            //
            arc_path: $ => prec(
                3,
                choice(
                    seq($.prim_path, optional($.layer_offset)),
                    seq(
                        alias($._empty_prim_path, $.prim_path),
                        optional($.layer_offset),
                    ),
                    seq(
                        $.asset_path,
                        optional(
                            choice(
                                $.prim_path,
                                alias($._empty_prim_path, $.prim_path),
                            ),
                        ),
                        optional($.layer_offset),
                    ),
                )
            ),
            // This has to be a single ``token``. Without it ``extras`` are free
            // to appear between the "@"s, so the "//" of a path like
            // ``@///test/layer.usda@`` starts a line comment and swallows the
            // rest of the line.
            //
            asset_path: $ => token(
                seq(
                    "@",
                    repeat(choice(/[^@\\]+/, seq("\\", /[^@]/))),
                    "@",
                ),
            ),
            prim_path: $ => seq("<", /[^<>]+/, ">"),
            prim_paths: $ => seq("[", repeat(seq($.prim_path, optional(","))), "]"),
            // An empty path. Only meaningful as a ``relocates`` target, where it
            // deletes a relocation that an ancestor layer introduced.
            //
            // It is always aliased back to ``prim_path`` so callers only ever
            // have one path node to match on.
            //
            _empty_prim_path: $ => token(seq("<", ">")),

            // ``relocates`` renames a namespace-descendant prim. It maps a
            // source path onto a target path. e.g.
            //
            //     over "Model" (
            //         relocates = {
            //             </Model/Rig/Scope>: </Model/Anim/Scope>,
            //             </Model/Old>: <>,
            //         }
            //     )
            //     {
            //     }
            //
            // Both paths may be absolute or relative.
            //
            relocates: $ => prec(
                2,
                seq(
                    "{",
                    comma_separated($.relocate),
                    optional(","),
                    "}",
                ),
            ),
            relocate: $ => seq(
                field("source", $.prim_path),
                ":",
                field(
                    "target",
                    choice($.prim_path, alias($._empty_prim_path, $.prim_path)),
                ),
            ),

            // Various syntax components
            //
            // Reference: pxr/usd/sdf/textFileFormatParser.h, ``LayerOffset``
            //
            // ``offset`` and ``scale`` entries, separated by a newline or a ";".
            // Newlines are already ``extras`` so, like a ``dictionary``, this is
            // a repeat with an optional ";". e.g.
            //
            //     payload = @./l.usda@ (offset = 10; scale = 0.2)
            //
            //     payload = @./l.usda@ (
            //         offset = 10
            //         scale = 0.2
            //     )
            //
            // USD calls this block a ReferenceParameter / PayloadParameter list.
            // A reference also accepts ``customData = {...}`` there, which is why
            // this is not purely a list of offsets. A payload does not, but the
            // two share one rule here because ``arc_path`` cannot tell them apart.
            //
            layer_offset: $ => seq(
                "(",
                repeat(
                    seq(
                        $.identifier,
                        "=",
                        choice($.float, $.integer, $.dictionary),
                        optional(";"),
                    ),
                ),
                ")",
            ),
            orderer: $ => choice("add", "append", "delete", "prepend", "reorder"),
            timeSamples: $ => prec(
                2,
                seq(
                    "{",
                    repeat(
                        seq(
                            field("left", choice($.float, $.integer)),
                            ":",
                            field(
                                "right",
                                choice($.array_edit, $.list, $._attribute_value),
                            ),
                            optional(",")
                        )
                    ),
                    "}",
                )
            ),

            // Reference: pxr/usd/sdf/textFileFormatParser.h, the ``Spline*`` rules
            //
            // A spline is an animation curve. Like ``timeSamples`` it is a
            // "{}" body of comma-separated items with an optional trailing
            // comma. Unlike ``timeSamples``, an item is one of four things -
            // a curve type, an extrapolation rule, a loop, or a knot. e.g.
            //
            //     double myAttr.spline = {
            //         bezier,
            //         pre: linear,
            //         post: sloped(0.57),
            //         loop: (15, 25, 0, 2, 11.7),
            //         7: 5.5 & 7.21; post held,
            //         15: 8.18; post curve (2.49, 1.17); { string comment = "climb!" },
            //     }
            //
            spline: $ => prec(
                2,
                seq(
                    "{",
                    comma_separated($._spline_item),
                    optional(","),
                    "}",
                ),
            ),
            _spline_item: $ => choice(
                $.spline_curve_type,
                $.spline_extrapolation,
                $.spline_loop,
                $.spline_knot,
            ),

            spline_curve_type: $ => choice("bezier", "hermite"),

            // How the curve behaves before its first knot / after its last one.
            spline_extrapolation: $ => seq(
                field("side", choice("pre", "post")),
                ":",
                field("mode", $._spline_extrapolation_mode),
            ),
            _spline_extrapolation_mode: $ => choice(
                "none",
                "held",
                "linear",
                $.spline_sloped,
                $.spline_extrapolation_loop,
            ),
            spline_sloped: $ => seq("sloped", "(", $._number, ")"),
            spline_extrapolation_loop: $ => seq(
                "loop",
                choice("repeat", "reset", "oscillate"),
                // The boundary time is optional
                optional(seq("(", $._number, ")")),
            ),

            // ``loop: (protoStart, protoEnd, preLoops, postLoops, valueOffset)``
            spline_loop: $ => seq(
                "loop",
                ":",
                "(",
                field("proto_start", $._number),
                ",",
                field("proto_end", $._number),
                ",",
                field("pre_loops", $._number),
                ",",
                field("post_loops", $._number),
                ",",
                field("value_offset", $._number),
                ")",
            ),

            // ``<time>: <value>`` plus any number of ";"-separated parameters
            spline_knot: $ => seq(
                field("time", $._number),
                ":",
                $._spline_knot_value,
                repeat(seq(";", $._spline_knot_param)),
            ),
            // A knot may hold two values. ``7: 5.5 & 7.21`` is 5.5 on approach
            // and 7.21 on the way out, which makes the knot a discontinuity.
            _spline_knot_value: $ => choice(
                field("value", $._number),
                seq(
                    field("pre_value", $._number),
                    "&",
                    field("value", $._number),
                ),
            ),
            _spline_knot_param: $ => choice(
                $.spline_pre_tangent,
                $.spline_post_shaping,
                // Knots carry arbitrary metadata, e.g. ``{ string comment = "climb!" }``
                $.dictionary,
            ),
            spline_pre_tangent: $ => seq("pre", $.spline_tangent),
            spline_post_shaping: $ => seq(
                "post",
                field(
                    "interpolation",
                    choice("none", "held", "linear", "curve"),
                ),
                optional($.spline_tangent),
            ),
            // ``(slope)``, ``(width, slope)``, ``(slope, algorithm)`` or
            // ``(width, slope, algorithm)``
            spline_tangent: $ => seq(
                "(",
                choice(
                    seq(
                        field("width", $._number),
                        ",",
                        field("slope", $._number),
                        ",",
                        field("algorithm", $.spline_tangent_algorithm),
                    ),
                    seq(
                        field("width", $._number),
                        ",",
                        field("slope", $._number),
                    ),
                    seq(
                        field("slope", $._number),
                        ",",
                        field("algorithm", $.spline_tangent_algorithm),
                    ),
                    field("slope", $._number),
                ),
                ")",
            ),
            spline_tangent_algorithm: $ => choice("custom", "autoEase"),

            _number: $ => choice($.float, $.integer),

            // Reference: pxr/usd/sdf/textFileFormatParser.h, the ``ArrayEdit*`` rules
            //
            // An array edit is a list of instructions that transform whatever
            // array a weaker layer already composed, instead of replacing it.
            // e.g.
            //
            //     int[] iattr = edit [
            //         write [0] to [1]
            //         write 123 to [0]
            //         append [-1]
            //         prepend 63
            //         erase [3]
            //         minsize 100 fill 0
            //     ]
            //
            // Instructions are separated by a newline or a ";" - the fixtures
            // use both, sometimes in the same body.
            //
            array_edit: $ => seq(
                "edit",
                "[",
                repeat(seq($._array_edit_instruction, optional(";"))),
                "]",
            ),
            _array_edit_instruction: $ => choice(
                $.array_edit_prepend,
                $.array_edit_append,
                $.array_edit_write,
                $.array_edit_insert,
                $.array_edit_erase,
                $.array_edit_minsize,
                $.array_edit_resize,
                $.array_edit_maxsize,
            ),

            array_edit_prepend: $ => seq("prepend", $._array_edit_source),
            array_edit_append: $ => seq("append", $._array_edit_source),
            array_edit_write: $ => seq(
                "write",
                $._array_edit_source,
                "to",
                field("index", $.array_edit_index),
            ),
            array_edit_insert: $ => seq(
                "insert",
                $._array_edit_source,
                "at",
                field("index", $.array_edit_index),
            ),
            array_edit_erase: $ => seq(
                "erase",
                field("index", $.array_edit_index),
            ),
            array_edit_minsize: $ => seq(
                "minsize",
                field("size", $.integer),
                optional($.array_edit_fill),
            ),
            array_edit_resize: $ => seq(
                "resize",
                field("size", $.integer),
                optional($.array_edit_fill),
            ),
            array_edit_maxsize: $ => seq(
                "maxsize",
                field("size", $.integer),
            ),
            array_edit_fill: $ => seq(
                "fill",
                field("value", $._array_edit_literal),
            ),

            // The thing being written / appended / prepended is either an index
            // into the array as it was before the edit or a literal value.
            // ``append [-1]`` re-appends the last existing element whereas
            // ``append -1`` appends the number -1.
            //
            _array_edit_source: $ => choice(
                field("source", $.array_edit_index),
                field("source", $._array_edit_literal),
            ),
            array_edit_index: $ => seq("[", $.integer, "]"),
            // USD calls this an AtomicValue or a TypedTupleValue. The identifier
            // is what makes ``write yes to [-1]`` work.
            //
            // Note that this cannot be ``$.identifier``. That rule allows a
            // leading digit, so it would match ``123`` just as happily as
            // ``$.integer`` does and ``write 123 to [0]`` would come out as an
            // identifier. USD does not allow a leading digit here anyway.
            //
            _array_edit_literal: $ => choice(
                $._attribute_value,
                alias($._array_edit_identifier, $.identifier),
            ),
            _array_edit_identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

            _inner_attribute_assignment: $ => seq(
                $.attribute_type,
                choice(
                    $.identifier,
                    // It's rare but it's valid for a dict to contain string identifiers
                    // e.g.
                    //
                    //     #usda 1.0
                    //
                    //     def Scope "root" (
                    //         customData = {
                    //             string "foo" = "bar"
                    //         }
                    //         kind = "group"
                    //     )
                    //     {
                    //     }
                    //
                    // The ``"foo"`` is valid and USD auto-converts it to
                    // ``foo`` at the earliest opportunity.
                    //
                    $.string,
                ),
                "=",
                choice($.list, $._attribute_value),
            ),
            _inner_dictionary_assignment: $ => seq(
                $._dictionary_type,
                choice(
                    $.identifier,
                    $.string,  // ``$.string`` seems to be uncommon
                ),
                "=",
                $.dictionary,
            ),
        }
    }
)

// The shared tail of every ``attribute_assignment``. ``value`` is whichever
// value the left-hand side allows.
//
function attribute_right_side($, value) {
  return prec.left(
    1,
    seq(
      value,
      optional($.metadata),
      optional(";"),  // Rare but attributes can end in a ";"
    ),
  );
}

function comma_separated(rule) {
  return optional(seq(rule, repeat(seq(",", rule))));
}

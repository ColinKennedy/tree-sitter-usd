// Copyright (C) THEDATE Colin Kennedy
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
                // Comments in USD can be ``# foo`` or ``// bar``. ``//`` is rare
                choice(seq("#", /.*/), seq("//", /.*/))
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
                optional(seq(".", $.attribute_property)),
            ),

            attribute_property: $=> choice("connect", "timeSamples"),

            attribute_declaration: $ => prec.left(
                2,
                seq(
                    $._attribute_left_side,
                    optional($.metadata),
                    optional(";"),  // Rare but attributes can end in a ";"
                ),
            ),

            attribute_assignment: $ => seq(
                $._attribute_left_side,
                "=",
                prec.left(
                    1,
                    seq(
                        choice($.list, $._attribute_value, $.timeSamples, $.None),
                        optional($.metadata),
                        optional(";"),  // Rare but attributes can end in a ";"
                    ),
                ),
            ),

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
                $._base_value,
            ),
            _attribute_value: $ => choice($.asset_path, $._base_value),
            dictionary: $ => prec(
                3,
                seq(
                    "{",
                    repeat(
                        choice(
                            $._inner_dictionary_assignment,
                            $._inner_attribute_assignment,
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
                  /u{[0-9a-fA-F]+}/,
                  /U[0-9a-fA-F]{8}/,
                )
              )
            ),

            // Special types
            _dictionary_type: $ => alias("dictionary", $.attribute_type),
            arc_path: $ => prec(
                3,
                choice(
                    seq($.prim_path, optional($.layer_offset)),
                    seq($.asset_path, optional($.prim_path), optional($.layer_offset)),
                )
            ),
            asset_path: $ => seq(
                "@",
                repeat(choice(/[^@\\]+/, seq("\\", /[^@]/))),
                "@",
            ),
            prim_path: $ => seq("<", /[^<>]+/, ">"),
            prim_paths: $ => seq("[", repeat(seq($.prim_path, optional(","))), "]"),

            // Various syntax components
            layer_offset: $ => seq(
                "(",
                semicolon_separated(seq($.identifier, "=", choice($.float, $.integer))),
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
                            field("right", choice($.list, $._attribute_value)),
                            optional(",")
                        )
                    ),
                    "}",
                )
            ),

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

function comma_separated(rule) {
  return optional(seq(rule, repeat(seq(",", rule))));
}

function semicolon_separated(rule) {
  return optional(seq(rule, repeat(seq(";", rule))));
}

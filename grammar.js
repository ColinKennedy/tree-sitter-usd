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

            comment: $ => token(seq("#", /.*/)),

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
                optional($.custom),
                optional($.uniform),
                $.attribute_type,
                field("name", $.identifier),  // TODO: Check if identifier has to be ASCII. might be stricter than a regular identifier
                optional(
                    seq(
                        ".",
                        choice(
                            field("timeSamples", "timeSamples"),
                            field("connect", "connect"),
                        ),
                    ),
                ),
            ),

            attribute_declaration: $ => prec.left(
                2,
                seq(
                    $._attribute_left_side,
                    optional($.metadata),
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
                    ),
                )
            ),

            relationship_declaration: $ => prec.left(
                2,
                seq(
                    "rel",
                    $.identifier,
                    optional($.metadata),
                )
            ),

            relationship_assignment: $ => prec.left(2,
                seq(
                    "rel",
                    $.identifier,
                    "=",
                    choice($.prim_paths, $.prim_path, $.None),
                    optional($.metadata),
                ),
            ),

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
            _base_value: $ => choice(  // Consider adding a $.list, to this or $._attribute_value
                $.None,
                $.bool,
                $.float,
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
            bool: $ => choice("false", "true"),
            float: $ => /-?(\d*\.)?\d+(e[-]\d+[\.\d]*)?/,
            _identifier: $ => /[a-zA-Z0-9_:\.]+/i,
            identifier: $ => $._identifier,  // TODO: Is expanded unicode allowed?
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
            string: $ => choice($._string, $._multiline_string),
            _multiline_string: $ => seq(
              '"""',
              repeat(choice($._string_character_content, $._escaped_string_character)),
              '"""'
            ),
            _asset_character_content: $ => /[^@\\]+/,
            _escaped_asset_character: $ => seq("\\", /[^@]/),
            _string_character_content: $ => /[^"\\]+/,
            _escaped_string_character: $ => seq("\\", /[^\"]/),
            _string: $ => seq(
              '"',
              repeat(choice($._string_character_content, $._escaped_string_character)),
              '"'
            ),

            // Special types
            _dictionary_type: $ => "dictionary",
            arc_path: $ => prec(3, seq($.asset_path, optional($.prim_path), optional($.layer_offset))),
            asset_path: $ => seq(
                "@",
                repeat(choice($._asset_character_content, $._escaped_asset_character)),
                "@",
            ),
            prim_path: $ => seq("<", /[^<>]+/, ">"),
            prim_paths: $ => seq("[", repeat(seq($.prim_path, optional(","))), "]"),

            // Various syntax components
            _inner_attribute_assignment: $ => seq(
                $.attribute_type,
                $.identifier,
                "=",
                choice($.list, $._attribute_value),
            ),
            _inner_dictionary_assignment: $ => seq(
                $._dictionary_type,
                choice($.identifier, $.string),  // ``$.string`` seems to be uncommon
                "=",
                $.dictionary,
            ),

            layer_offset: $ => seq(
                "(",
                semicolon_separated(seq($.identifier, "=", $.float)),
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
        }
    }
)

function comma_separated(rule) {
  return optional(seq(rule, repeat(seq(",", rule))));
}

function semicolon_separated(rule) {
  return optional(seq(rule, repeat(seq(";", rule))));
}

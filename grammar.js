module.exports = grammar(
    {
        name: "usd",

        // extras: $ => [
        //   $.comment,
        //   /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
        // ],

        // precedences: $ => [
        //     [$.attribute_assignment],
        //     // [$._attribute_value
        //     // [$.asset_paths, $.prim_paths],
        //     // // [$.attribute_assignment, $.attribute_declaration],
        // ],

        rules: {
            module: $ => repeat($._statement),

            _statement: $ => choice(
                $.attribute_assignment,
                $.comment,
                $.metadata,
                $.prim_definition,
                // TODO: Add this later, maybe
                // prec(2, $.attribute_declaration),
                // prec(3, $.attribute_assignment),
            ),

            comment: $ => token(seq("#", /.*/)),
            metadata: $ => seq(
                "(",
                // Note: In USD, SdfLayer::SetComment is written as a raw, string literal
                repeat(choice($.metadata_assignment, $.string_literal)),
                ")",
            ),
            // TODO: Add "list-of" support to ``metadata_assignment``. e.g. asset paths, prim paths
            // Not sure if USD supports it. Double check
            metadata_assignment: $ => seq(
                $.identifier,
                "=",
                choice($.list, $._attribute_value),
            ),
            _attribute_value: $ => choice(
                $.asset_path,
                $.dictionary,
                $.digit,
                $.prim_path,
                $.string_literal,
            ),
            identifier: $ => /[a-zA-Z0-9_:\.]+/i,
            // TODO: Check if any text is okay for ``asset_path``
            asset_path: $ => seq(seq("@", /[^@]+/, "@"), optional($.prim_path)),
            dictionary: $ => seq("{", repeat(seq($.identifier, "=", $.string_literal)), "}"),  // TODO: Finish, later
            digit: $ => /-*\d+[\.\d]*/,
            integer: $ => /\d+/,
            prim_path: $ => seq("<", /[^<>]+/, ">"),

            string_literal: $ => choice($._string_literal, $._multiline_string_literal),
            _multiline_string_literal: $ => seq(
              '"""',
              repeat(/[^"]/),
              '"""'
            ),
            _string_literal: $ => seq(
              '"',
              repeat(/[^"]/),
              '"'
            ),

            prim_definition: $ => seq(
                $.prim_type,
                optional($.identifier),
                $.string_literal,
                optional($.metadata),
                $.block,
            ),

            prim_type: $ => choice("class", "def", "over"),

            block: $ => seq(
                "{",
                repeat(
                    choice(
                        $.prim_definition,

                        // $.attribute_declaration,  // Useful for USD schema files TODO Add
                        $.attribute_assignment,  // Most USD files prefer this
                        // TODO: Add attribute / variant / etc implementation
                    )
                ),
                "}",
            ),

            // attribute_declaration: $ => $._attribute_declaration,
            // TODO: Add support for this later
            // _attribute_declaration: $ => seq(
            //     optional($.custom),
            //     optional($.uniform),
            //     $._pattern_list,
            // ),
            attribute_assignment: $ => seq(
                prec.left(
                    2,
                    seq(
                        optional($.custom),
                        optional($.uniform),
                        $._attribute_type,
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
                    )
                ),
                "=",
                prec.left(
                    1,
                    seq(
                        choice($.list, $._attribute_value, $.timeSamples),
                        optional($.metadata),
                    ),
                )
            ),

            list: $ => seq("[", comma_separated($._attribute_value), optional(","), "]"),
            timeSamples: $ => prec(
                2,
                seq(
                    "{",
                    repeat(
                        seq(
                            field("left", $.digit),
                            ":",
                            field("right", $._attribute_value),
                            optional(",")
                        )
                    ),
                    "}",
                )
            ),
            custom: $ => "custom",
            uniform: $ => "uniform",

            // Reference: https://openusd.org/release/api/sdf_page_front.html
            _attribute_type: $ => choice(
                $._scalar_type,
                $._dimensioned_type,
                $._dictionary_type,
                $._extra_type,
            ),

            _scalar_type: $ => choice(
                "asset", "asset[]",
                "bool", "bool[]",
                "double", "double[]",
                "float", "float[]",
                "half", "half[]",
                "int", "int[]",
                "int64", "int64[]",
                "string", "string[]",
                "timecode", "timecode[]",
                "token", "token[]",
                "uchar", "uchar[]",
                "uint", "uint[]",
                "uint64", "uint64[]",
            ),

            _dictionary_type: $ => "dictionary",

            _dimensioned_type: $ => choice(
                "double2", "double2[]",
                "double3", "double3[]",
                "double4", "double4[]",
                "float2", "float2[]",
                "float3", "float3[]",
                "float4", "float4[]",
                "half2", "half2[]",
                "half3", "half3[]",
                "half4", "half4[]",
                "int2", "int2[]",
                "int3", "int3[]",
                "int4", "int4[]",
                "matrix2d", "matrix2d[]",
                "matrix3d", "matrix3d[]",
                "matrix4d", "matrix4d[]",
                "quatd", "quatd[]",
                "quatf", "quatf[]",
                "quath", "quath[]",
            ),

            _extra_type: $ => "color3f"
        }
    }
)

function comma_separate(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function comma_separated(rule) {
  return optional(comma_separate(rule));
}

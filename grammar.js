module.exports = grammar(
    {
        name: "usd",

        // extras: $ => [
        //   $.comment,
        //   /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
        // ],

        rules: {
            module: $ => repeat($._statement),

            _statement: $ => choice(
                $.attribute_definition,
                // $.comment,
                // $.metadata,
                // $.prim_definition,
                // // prec(2, $.attribute_declaration),
                // // prec(3, $.attribute_definition),
            ),

            comment: $ => token(seq("#", /.*/)),
            metadata: $ => seq("(", repeat($.metadata_assignment), ")"),
            // TODO: Add "list-of" support to ``metadata_assignment``. e.g. asset paths, prim paths
            // Not sure if USD supports it. Double check
            metadata_assignment: $ => seq($.identifier, "=", $._attribute_value),
            _attribute_value: $ => choice(
                $.asset_path,
                $.dictionary,
                $.digit,
                $.prim_path,
                $.string_literal,
            ),
            identifier: $ => /[a-zA-Z0-9_\.]+/i,
            // TODO: Check if any text is okay for ``asset_path``
            asset_path: $ => seq(seq("@", /[^@]+/, "@"), optional($.prim_path)),
            dictionary: $ => seq("{", "}"),  // TODO: Finish, later
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
                        $.attribute_definition,  // Most USD files prefer this
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
            attribute_definition: $ => seq(
                optional($.custom),
                optional($.uniform),
                $._attribute_type,
                $.identifier,  // TODO: Check if identifier has to be ASCII. might be stricter than a regular identifier
                "=",
                choice($._attribute_values, $._attribute_value),
                optional($.metadata),
            ),
            _attribute_values: $ => seq("[", comma_separated($._attribute_value), "]"),

            custom: $ => "custom",
            uniform: $ => "uniform",

            // Reference: https://openusd.org/release/api/sdf_page_front.html
            _attribute_type: $ => choice(
                $._scalar_type,
                $._dimensioned_type,
                $._dictionary_type,
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
        }
    }
)

function comma_separate(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function comma_separated(rule) {
  return optional(comma_separate(rule));
}

module.exports = grammar(
    {
        name: "usd",

        // extras: $ => [
        //   $.comment,
        //   /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
        // ],

        rules: {
            module: $ => seq($.sheline, optional($.layer_metadata), optional(repeat($.prim_definition))),

            // TODO: Fix
            sheline: $ => seq(
                "#",
                /[a-z]+ [\d+\.]+/
            ),

            // TODO: Add this, later. Plus unittest
            layer_metadata: $ => seq(
                "(",
                // TODO: This should only have one field for "subLayers". At
                // the moment, there's multiple. Fix that later.
                //
                optional(field("subLayers", seq("subLayers", "=", $._asset_list))),
                ")",
            ),

            _asset_list: $ => seq("[", comma_separate($.usd_asset_path), "]"),

            usd_asset_path: $ => seq("@", /[^@]+/, "@"),  // TODO: Check if any text is okay
            usd_asset_prim_path: $ => seq(
                $.usd_asset_path, optional($.prim_path),
            ),

            prim_path: $ => seq("<", /[^<>]+/, ">"),

            prim_definition: $ => seq(
                field("prim_type", $.prim_type),
                optional(field("schema_type", $.identifier)),
                field("name", seq('"', $.identifier, '"')),  // TODO: Add string literal, here
                optional($.block),
            ),

            prim_type: $ => choice("class", "def", "over"),

            attribute_declaration: $ => seq(
                optional(field("custom", $.custom)),
                optional(field("uniform", $.uniform)),
                $._pattern_list,
            ),

            attribute_definition: $ => seq(
                field("left", $.attribute_declaration),
                "=",
                field("right", $.value_list),
            ),

            custom: $ => "custom",
            uniform: $ => "uniform",

            _pattern_list: $ => seq(
                $._attribute_type,
                $.identifier,  // TODO: Check if identifier has to be ASCII. might be stricter than a regular identifier
            ),

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
                // TODO: Add later
                // "int64", "int64[]",
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
                "int64", "int64[]",
                "matrix2d", "matrix2d[]",
                "matrix3d", "matrix3d[]",
                "matrix4d", "matrix4d[]",
                "quatd", "quatd[]",
                "quatf", "quatf[]",
                "quath", "quath[]",
            ),

            // TODO: Finish
            value_list: $ => "8",

            block: $ => seq(
                "{",
                optional(
                    repeat(
                        choice(
                            $.prim_definition,

                            $.attribute_declaration,
                            $.attribute_definition,
                        )
                    )
                ),
                // // TODO: Add attribute / variant / etc implementation
                // // optional(repeat($._statement)),
                "}"
            ),

            identifier: $ => /[a-zA-Z0-9_]+/i,

            // TODO: Incorporate this later
            comment: $ => token(seq('#', /.*/)),

            // string_literal: $ => choice($._string_literal, $._multiline_string_literal),
            //
            // _multiline_string_literal: $ => seq(
            //   '"""',
            //   repeat(/[^"]/),
            //   '"""'
            // ),
            //
            // _string_literal: $ => seq(
            //   '"',
            //   repeat(/[^"]/),
            //   '"'
            // ),
        }
    }
)

function comma_separate_1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function comma_separate(rule) {
  return optional(comma_separate_1(rule));
}

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

            layer_metadata: $ => "ASD",
            layer_metadata: $ => seq(
                "(",
                repeat(
                    choice(
                        field("colorConfiguration", seq("colorConfiguration", "=", $.asset_path)),
                        field("colorManagementSystem", seq("colorManagementSystem", "=", $.string_literal)),
                        field("comment", $.string_literal),
                        field("customLayerData", seq("customLayerData", "=", $.dictionary)),
                        field("defaultPrim", seq("defaultPrim", "=", $.string_literal)),
                        field("doc", seq("doc", "=", $.string_literal)),
                        field("endTimeCode", seq("endTimeCode", "=", $.digit)),
                        field("framePrecision", seq("framePrecision", "=", $.integer)),
                        field("framesPerSecond", seq("framesPerSecond", "=", $.digit)),
                        field("owner", seq("owner", "=", $.string_literal)),
                        field("startTimeCode", seq("startTimeCode", "=", $.digit)),
                        // TODO: This should only have one field for "subLayers". At
                        // the moment, there's multiple. Fix that later.
                        //
                        field("subLayers", seq("subLayers", "=", $._asset_list)),
                        // TODO: Add later
                        // field("others", stuff),
                    )
                ),
                ")",
            ),

            dictionary: $ => seq("{", "}"),  // TODO: Finish, later
            asset_path: $ => seq("@", $.identifier, "@"),
            digit: $ => /\d+[\.\d]+/,
            integer: $ => /\d+/,

            string_literal: $ => choice($._string_literal, $._multiline_string_literal),

            _asset_list: $ => seq("[", comma_separated($.asset_path), optional(","), "]"),

            asset_path: $ => seq("@", /[^@]+/, "@"),  // TODO: Check if any text is okay
            asset_prim_path: $ => seq(
                $.asset_path, optional($.prim_path),
            ),

            prim_path: $ => seq("<", /[^<>]+/, ">"),
            prim_paths: $ => seq("[", comma_separated($.prim_path), optional(","), "]"),

            prim_definition: $ => seq(
                field("prim_type", $.prim_type),
                optional(field("schema_type", $.identifier)),
                field("name", $.string_literal),
                optional($.prim_metadata),
                optional($.block),
            ),

            prim_type: $ => choice("class", "def", "over"),

            prim_metadata: $ => seq(
                "(",
                repeat(
                    choice(
                        field("assetInfo", seq("assetInfo", "=", $.asset_info)),
                        field("inherits", seq(optional($._list_edit), "inherits", "=", $.prim_paths)),
                        // TODO: Check if you can do multiple payloads
                        field("payload", seq(optional($._list_edit), "payload", "=", $._asset_list)),
                        field("references", seq(optional($._list_edit), "references", "=", $._asset_list)),
                        field("specializes", seq(optional($._list_edit), "specializes", "=", $.prim_paths)),
                    )
                ),
                ")",
            ),

            // TODO: Double-check if ``"add"`` is still needed.
            _list_edit: $ => choice("add", "append", "delete", "prepend"),

            // TODO: Finish this later
            asset_info: $ => "",

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
                "matrix2d", "matrix2d[]",
                "matrix3d", "matrix3d[]",
                "matrix4d", "matrix4d[]",
                "quatd", "quatd[]",
                "quatf", "quatf[]",
                "quath", "quath[]",
            ),

            // TODO: Finish
            value_list: $ => "8",

            identifier: $ => /[a-zA-Z0-9_]+/i,

            // TODO: Incorporate this later
            comment: $ => token(seq('#', /.*/)),

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
        }
    }
)

function comma_separate(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function comma_separated(rule) {
  return optional(comma_separate(rule));
}

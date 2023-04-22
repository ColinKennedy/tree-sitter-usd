module.exports = grammar(
    {
        name: "usd",

        // extras: $ => [
        //   $.comment,
        //   /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
        // ],

        precedences: $ => [
            [$.asset_paths, $.prim_paths],
            // [$.attribute_definition, $.attribute_declaration],
        ],

        rules: {
            module: $ => repeat($._statement),

            _statement: $ => choice(
                $.comment,
                $.metadata,
                $.prim_definition,
                // prec(2, $.attribute_declaration),
                // prec(3, $.attribute_definition),
            ),

            comment: $ => token(seq("#", /.*/)),
            metadata: $ => seq("(", repeat($.metadata_assignment), ")"),
            metadata_assignment: $ => seq($.identifier, "=", $._data_value),
            _data_value: $ => choice(
                prec(2, $.asset_paths),
                $.asset_path,
                $.dictionary,
                $.digit,
                $.prim_path,
                prec(1, $.prim_paths),
                $.string_literal,
            ),
            identifier: $ => /[a-zA-Z0-9_\.]+/i,
            asset_paths: $ => seq("[", comma_separated($.asset_path), optional(","), "]"),
            // TODO: Check if any text is okay for ``asset_path``
            asset_path: $ => seq(seq("@", /[^@]+/, "@"), optional($.prim_path)),
            dictionary: $ => seq("{", "}"),  // TODO: Finish, later
            digit: $ => /\d+[\.\d]*/,
            integer: $ => /\d+/,
            prim_path: $ => seq("<", /[^<>]+/, ">"),
            prim_paths: $ => seq("[", comma_separated($.prim_path), optional(","), "]"),

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

                        $.attribute_declaration,  // Useful for USD schema files
                        $.attribute_definition,  // Most USD files prefer this
                        // TODO: Add attribute / variant / etc implementation
                    )
                ),
                "}",
            ),

            attribute_declaration: $ => $._attribute_declaration,
            _attribute_declaration: $ => seq(
                optional($.custom),
                optional($.uniform),
                $._pattern_list,
            ),
            attribute_definition: $ => seq($._attribute_declaration, "=", $._attribute_value),
            _attribute_value: $ => seq($._data_value, optional($.metadata)),

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

            // module: $ => repeat($._statement),
            //
            // _statement: $ => choice($.comment, $.metadata, $.prim_definition),
            //
            // comment: $ => seq("#", /.+$/),
            // metadata: $ => seq("(", repeat($.metadata_assignment), ")"),
            // metadata_assignment: $ => seq($.identifier, "=", $._data_value),
            // _data_value: $ => choice(
            //     prec(2, $.asset_paths),
            //     $.asset_path,
            //     $.dictionary,
            //     $.digit,
            //     $.integer,
            //     $.prim_path,
            //     prec(1, $.prim_paths),
            //     $.string_literal,
            // ),
            //
            // asset_paths: $ => seq("[", comma_separated($.asset_path), optional(","), "]"),
            //
            // // TODO: Check if any text is okay for ``asset_path``
            // asset_path: $ => seq(seq("@", /[^@]+/, "@"), optional($.prim_path)),
            // dictionary: $ => seq("{", "}"),  // TODO: Finish, later
            // digit: $ => /\d+[\.\d]+/,
            // integer: $ => /\d+/,
            // prim_path: $ => seq("<", /[^<>]+/, ">"),
            // prim_paths: $ => seq("[", comma_separated($.prim_path), optional(","), "]"),
            // string_literal: $ => choice($._string_literal, $._multiline_string_literal),
            //
            // prim_definition: $ => "",
            // // prim_definition: $ => seq(
            // //     $.prim_type,
            // //     optional(field("schema_type", $.identifier)),
            // //     field("name", $.string_literal),
            // //     optional($.prim_metadata),
            // //     optional($.block),
            // // ),
            // //
            // // prim_type: $ => choice("class", "def", "over"),
            // //
            // // prim_metadata: $ => seq(
            // //     "(",
            // //     repeat(
            // //         choice(
            // //             field("assetInfo", seq("assetInfo", "=", $.asset_info)),
            // //             field("inherits", seq(optional($._list_edit), "inherits", "=", $.prim_paths)),
            // //             // TODO: Check if you can do multiple payloads
            // //             field("payload", seq(optional($._list_edit), "payload", "=", $.asset_paths)),
            // //             field("references", seq(optional($._list_edit), "references", "=", $.asset_paths)),
            // //             field("specializes", seq(optional($._list_edit), "specializes", "=", $.prim_paths)),
            // //         )
            // //     ),
            // //     ")",
            // // ),
            //
            // // TODO: Double-check if ``"add"`` is still needed.
            // _list_edit: $ => choice("add", "append", "delete", "prepend"),
            //
            // // TODO: Finish this later
            // asset_info: $ => "",
            //
            // attribute_declaration: $ => seq(
            //     optional(field("custom", $.custom)),
            //     optional(field("uniform", $.uniform)),
            //     $._pattern_list,
            // ),
            //
            // attribute_definition: $ => seq(
            //     field("left", $.attribute_declaration),
            //     "=",
            //     field("right", $._attribute_value),
            // ),
            //
            // block: $ => seq(
            //     "{",
            //     optional(
            //         repeat(
            //             choice(
            //                 $.prim_definition,
            //
            //                 $.attribute_declaration,
            //                 $.attribute_definition,
            //             )
            //         )
            //     ),
            //     // // TODO: Add attribute / variant / etc implementation
            //     // // optional(repeat($._statement)),
            //     "}"
            // ),
            //
            // custom: $ => "custom",
            // uniform: $ => "uniform",
            //
            // _pattern_list: $ => seq(
            //     $._attribute_type,
            //     $.identifier,  // TODO: Check if identifier has to be ASCII. might be stricter than a regular identifier
            // ),
            //
            // // Reference: https://openusd.org/release/api/sdf_page_front.html
            // _attribute_type: $ => choice(
            //     $._scalar_type,
            //     $._dimensioned_type,
            //     $._dictionary_type,
            // ),
            //
            // _scalar_type: $ => choice(
            //     "asset", "asset[]",
            //     "bool", "bool[]",
            //     "double", "double[]",
            //     "float", "float[]",
            //     "half", "half[]",
            //     "int", "int[]",
            //     // TODO: Add later
            //     // "int64", "int64[]",
            //     "string", "string[]",
            //     "timecode", "timecode[]",
            //     "token", "token[]",
            //     "uchar", "uchar[]",
            //     "uint", "uint[]",
            //     "uint64", "uint64[]",
            // ),
            //
            // _dictionary_type: $ => "dictionary",
            //
            // _dimensioned_type: $ => choice(
            //     "double2", "double2[]",
            //     "double3", "double3[]",
            //     "double4", "double4[]",
            //     "float2", "float2[]",
            //     "float3", "float3[]",
            //     "float4", "float4[]",
            //     "half2", "half2[]",
            //     "half3", "half3[]",
            //     "half4", "half4[]",
            //     "int2", "int2[]",
            //     "int3", "int3[]",
            //     "int4", "int4[]",
            //     "matrix2d", "matrix2d[]",
            //     "matrix3d", "matrix3d[]",
            //     "matrix4d", "matrix4d[]",
            //     "quatd", "quatd[]",
            //     "quatf", "quatf[]",
            //     "quath", "quath[]",
            // ),
            //
            // // TODO: Finish
            // _attribute_value: $ => "8",
            //
            // identifier: $ => /[a-zA-Z0-9_\.]+/i,
            //
            // // TODO: Incorporate this later
            // comment: $ => token(seq('#', /.*/)),
            //
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

function comma_separate(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function comma_separated(rule) {
  return optional(comma_separate(rule));
}

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
                // TODO: Remove the non prim-definition / comment from this, later
                $.prim_definition,
                $.attribute_assignment,
                $.relationship_assignment,
                $.metadata,
                $.comment,
                // TODO: Add this later, maybe
                // prec(2, $.attribute_declaration),
                // prec(3, $.attribute_assignment),
            ),

            comment: $ => token(seq("#", /.*/)),

            // TODO: Add "list-of" support to ``metadata_assignment``. e.g. asset paths, prim paths
            // Not sure if USD supports it. Double check
            prim_type: $ => choice("class", "def", "over"),
            prim_definition: $ => seq(
                $.prim_type,
                optional($.identifier),
                $.string_literal,
                optional($.metadata),
                $.block,
            ),
            block: $ => seq(
                "{",
                repeat(
                    choice(
                        $.prim_definition,

                        $.relationship_assignment,

                        // $.attribute_declaration,  // Useful for USD schema files TODO Add
                        $.attribute_assignment,  // Most USD files prefer this

                        $.variant_set_definition,
                    )
                ),
                "}",
            ),

            custom: $ => "custom",
            uniform: $ => "uniform",
            // attribute_declaration: $ => $._attribute_declaration,
            // TODO: Add support for this later
            // _attribute_declaration: $ => seq(
            //     optional($.custom),
            //     optional($.uniform),
            //     $._pattern_list,
            // ),
            attribute_assignment: $ => seq(
                seq(
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
                "=",
                prec.left(
                    1,
                    seq(
                        choice($.list, $._attribute_value, $.timeSamples),
                        optional($.metadata),
                    ),
                )
            ),

            relationship_assignment: $ => seq(
                "rel",
                $.identifier,
                "=",
                choice($.prim_paths, $.prim_path),
            ),

            variant_set_definition: $ => seq(
                "variantSet",
                $.string_literal,
                "=",
                "{",
                repeat($.variant),
                "}"
            ),

            variant: $ => seq(
                $.string_literal,
                optional($.metadata),
                $.block,
            ),

            // Literal types
            // Reference: https://openusd.org/release/api/sdf_page_front.html
            attribute_type: $ => choice(
                $._scalar_type,
                $._dimensioned_type,
                $._dictionary_type,
                $._extra_type,
            ),
            _base_value: $ => choice(  // Consider adding a $.list, to this or $._attribute_value
                $.dictionary,
                $.digit,
                $.prim_path,
                $.string_literal,
                $.tuple,
            ),
            _metadata_value: $ => choice($.arc_path, $._base_value),
            _attribute_value: $ => choice($.asset_path, $._base_value),
            dictionary: $ => seq(  // TODO: Finish, later
                "{",
                repeat(seq($.attribute_type, $.identifier, "=", $._attribute_value)),
                "}",
            ),
            digit: $ => /-*\d+[\.\d]*/,
            identifier: $ => /[a-zA-Z0-9_:\.]+/i,
            integer: $ => /\d+/,
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

            // Special types
            arc_path: $ => seq($.asset_path, optional($.prim_path), optional($.layer_offset)),
            asset_path: $ => seq("@", /[^@]+/, "@"),
            prim_path: $ => seq("<", /[^<>]+/, ">"),
            prim_paths: $ => seq("[", repeat(seq($.prim_path, optional(","))), "]"),

            // TODO : Check if I can remove all of these hard-coded values and
            // just use a regular choice(foo, foo[]).
            //
            // USD type names
            //
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
            _extra_type: $ => choice(
                "color3f", "color3f[]",
            ),

            // Various syntax components
            layer_offset: $ => seq(
                "(",
                semicolon_separated(seq($.identifier, "=", $.digit)),
                ")",
            ),
            metadata_assignment: $ => seq(
                optional($.orderer),
                $.identifier,
                "=",
                choice($.list, $._metadata_value),
            ),
            metadata: $ => seq(
                "(",
                // Note: In USD, SdfLayer::SetComment is written as a raw, string literal
                repeat(choice($.metadata_assignment, $.string_literal)),
                ")",
            ),
            orderer: $ => choice("add", "append", "delete", "prepend", "reorder"),
            timeSamples: $ => prec(
                2,
                seq(
                    "{",
                    repeat(
                        seq(
                            field("left", $.digit),
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

// function comma_separated1(rule) {
//   return optional(seq(rule, repeat1(seq(",", rule))));
// }

function semicolon_separated(rule) {
  return optional(seq(rule, repeat(seq(";", rule))));
}

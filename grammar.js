module.exports = grammar(
    {
        name: "usd",
        rules:
        {
            // sheline: $ => seq(
            //     "#",
            //     /[a-z]+ [\d+\.]+/
            // ),

            // TODO: Add this, later. Plus unittest
            // layer_metadata: $ =>

            body: $ => "def",

            // body: $ => optional(repeat($.prim_definition)),
            //
            // prim_definition: $ => seq(
            //     field("prim_type", choice("class", "def", "over")),
            //     // optional(field("schema_type", "blah")),
            //     // field("name", '"foo"'),  // TODO: Add string literal, here
            //     // $.block,
            // ),
            //
            // block: $ => seq("{","}"),

            // prim_definition: $ => seq(
            //     field("prim_type", choice("class", "def", "over")),
            //     optional(field("schema_type", $.identifier)),
            //     field("name", seq('"', $.identifier, '"')),  // TODO: Add string literal, here
            //     $.block,
            // ),
            //
            // block: $ => seq(
            //     "{",
            //     // TODO: All recursive Prims / attributes
            //     optional(choice($._attribute_declaration, $.attribute_definition)),
            //     // TODO: Add attribute / variant / etc implementation
            //     // optional(repeat($._statement)),
            //     "}"
            // ),
            //
            // attribute_definition: $ => seq(
            //     $._attribute_declaration,
            //     "=",
            //     $._value_list,
            // ),
            //
            // _attribute_declaration: $ => seq(
            //     $._pattern_list,
            //     $.identifier,
            // ),
            //
            // identifier: $ => /[a-zA-Z0-9_]+/i,
            // string_literal: $ => choice($._string_literal, $._multiline_string_literal),
            //
            //
            // // Reference: https://openusd.org/release/api/sdf_page_front.html
            // _attribute_type: $ => choice(
            //     $._scalar_type,
            //     $._dimentioned_type,
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
            //     "int64", "int64[]",
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
            // _dimentioned_type: $ => choice(
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
            //     "int64", "int64[]",
            //     "matrix2d", "matrix2d[]",
            //     "matrix3d", "matrix3d[]",
            //     "matrix4d", "matrix4d[]",
            //     "quatd", "quatd[]",
            //     "quatf", "quatf[]",
            //     "quath", "quath[]",
            // ),
            //
            //
            //
            //
            // _class: $ => "class",
            // _def: $ => "def",
            // _over: $ => "over",
            //
            //
            // _multiline_string_literal: $ => seq(
            //   '"""',
            //   repeat(/[^"]/),
            //   '"""'
            // ),
            //
            // _pattern_list: $ => seq($._attribute_type, $.identifier),  // TODO: Check if identifier has to be ASCII. might be stricter than a regular identifier
            //
            // _schema_type: $ => /[a-zA-Z0-9_]+/i,
            //
            // _string_literal: $ => seq(
            //   '"',
            //   repeat(/[^"]/),
            //   '"'
            // ),
            //
            // // TODO: Finish
            // _statement: $ => "",
            //
            // _value_list: $ => choice(
            //     "8"
            // )
        }
    }
)

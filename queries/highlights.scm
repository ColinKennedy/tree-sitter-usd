(None) @constant.builtin
(asset_path) @string.special.asset
(bool) @boolean
(comment) @comment @spell
(custom) @function.builtin
(float) @float
(integer) @number
(namespace_identifier) @namespace
(orderer) @function.call
(prim_path) @string.special.prim
(uniform) @function.builtin

[
  "class"
  "def"
  "over"
] @keyword.function

["(" ")" "[" "]" "{" "}"] @punctuation.bracket
[":" ";" "."] @punctuation.delimiter

[
  "="
] @operator

;; Simple variables
(attribute_assignment
 (identifier) @variable
)
(attribute_declaration
 (identifier) @variable
)
(relationship_declaration
 (identifier) @variable
)
(relationship_assignment
 (identifier) @variable
)
(qualified_identifier
  (identifier) @variable)

;; Attribute components
(attribute_property) @property

(attribute_type) @type
(
 ;; Reference: https://openusd.org/release/api/sdf_page_front.html
 (attribute_type) @type.builtin
 (#any-of? @type.builtin
  ;; Scalar types
  "asset" "asset[]"
  "bool" "bool[]"
  "double" "double[]"
  "float" "float[]"
  "half" "half[]"
  "int" "int[]"
  "int64" "int64[]"
  "string" "string[]"
  "timecode" "timecode[]"
  "token" "token[]"
  "uchar" "uchar[]"
  "uint" "uint[]"
  "uint64" "uint64[]"

  ;; Dimensioned Types
  "double2" "double2[]"
  "double3" "double3[]"
  "double4" "double4[]"
  "float2" "float2[]"
  "float3" "float3[]"
  "float4" "float4[]"
  "half2" "half2[]"
  "half3" "half3[]"
  "half4" "half4[]"
  "int2" "int2[]"
  "int3" "int3[]"
  "int4" "int4[]"
  "matrix2d" "matrix2d[]"
  "matrix3d" "matrix3d[]"
  "matrix4d" "matrix4d[]"
  "quatd" "quatd[]"
  "quatf" "quatf[]"
  "quath" "quath[]"

  ;; Extra Types
  "color3f" "color3f[]"
  "normal3f" "normal3f[]"
  "point3f" "point3f[]"
  "texCoord2f" "texCoord2f[]"
  "vector3d" "vector3d[]"
  "vector3f" "vector3f[]"
  "vector3h" "vector3h[]"

  "dictionary"

  ;; Deprecated Types
  "EdgeIndex" "EdgeIndex[]"
  "FaceIndex" "FaceIndex[]"
  "Matrix4d" "Matrix4d[]"
  "PointIndex" "PointIndex[]"
  "PointFloat" "PointFloat[]"
  "Transform" "Transform[]"
  "Vec3f" "Vec3f[]"
 )
)

;; Relationships
(relationship_type) @type
(relationship_assignment
  (identifier) @variable
)
(relationship_declaration
  (identifier) @variable
)

(variant_set_definition) @keyword

;; String rules
(attribute_assignment
 (string) @string)
(dictionary
 (string) @string)
(list
 (string) @string)
; In USD def "foo" ("This is a docstring") {} < the ""s within the ()s is not
; a string but a docstring
;
(metadata
 (comment)*
 .
 (string) @comment.documentation)
(metadata_assignment
 (string) @string)
(prim_definition
 (string) @string)
(variant_set_definition
 (string) @string)
(variant
 (string) @string)

;; Layer metadata
(metadata_assignment
 (identifier) @variable)
(dictionary
 (identifier) @variable)

;; Docstrings in USD
(metadata
 (comment)*
 (string) @comment.documentation
)

(None) @constant.builtin
(asset_path) @text.uri
(attribute_property) @property
(bool) @boolean
(comment) @spell @comment
(custom) @function.builtin
(float) @float
(integer) @number
(orderer) @function.call
(display_unit) @constant.builtin
(permission) @constant.builtin
(prim_path) @string.special
(relationship_type) @type
(uniform) @function.builtin
(varying) @function.builtin
(variant_set_definition) @keyword

;; Array edits
[
  "edit"
  "write"
  "insert"
  "erase"
  "minsize"
  "resize"
  "maxsize"
  "fill"
  "to"
  "at"
] @keyword

;; Scoped to the instruction so that the ``add``/``append``/``prepend`` of an
;; (orderer) keeps its own @function.call highlight.
;;
(array_edit_append "append" @keyword)
(array_edit_prepend "prepend" @keyword)

;; Splines
(spline_curve_type) @keyword
(spline_tangent_algorithm) @keyword
[
  "pre"
  "post"
  "loop"
  "sloped"
  "repeat"
  "reset"
  "oscillate"
  "none"
  "held"
  "linear"
  "curve"
] @keyword

;; Prefer namespace highlighting, if any.
;;
;; e.g. `rel fizz` - `fizz` uses `@identifier`
;; e.g. `rel foo:bar:fizz` - `foo` and `bar` use `@namespace` and `fizz` uses `@identifier`
;;
;; NOTE: The later a pattern is written, the higher its priority. So the
;; @namespace patterns must come after the more general @variable pattern.
;;
(identifier) @variable
(namespace_identifier) @namespace
(namespace_identifier
  (identifier) @namespace
)

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

(string) @string

; In USD def "foo" ("This is a docstring") {} < the ""s within the ()s is not
; a string but a docstring
;
(metadata
 (comment)*
 .
 (string) @comment.documentation)

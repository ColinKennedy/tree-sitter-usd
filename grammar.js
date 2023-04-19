module.exports = grammar(
    {
        name: "usd",
	rules: {
	    prim_definition: $ => seq(
		field("prim_type", choice("class", "def", "over")),
		optional(field("schema_type", $.identifier)),
		field("name", seq('"', $.identifier, '"')),  // TODO: Add string literal, here
		$.block,
	    ),

	    // // TODO: Add the actual grammar rules
	    // shebang: $ => "#usda 1.0",  // TODO: make value, variable

	    _class: $ => "class",
	    _def: $ => "def",
	    _over: $ => "over",

	    _string_literal: $ => seq(
	      '"',
	      repeat(/[^"]/),
	      '"'
	    ),
	    // TODO: Add unittest where multi-line contains 1 or 2 " within
	    _multiline_string_literal: $ => seq(
	      '"""',
	      repeat(/[^"]/),
	      '"""'
	    ),

	    // TODO: Make sure this works. Can prims be named with )@(*#$& special characters?
	    _schema_type: $ => /[a-zA-Z0-9_]+/i,

	    // TODO: Finish
	    _statement: $ => "",

	    // TODO: Double-check what is allowed, as an identifier
	    identifier: $ => /[a-zA-Z0-9_]+/i,

	    string_literal: $ => choice($._string_literal, $._multiline_string_literal),

	    block: $ => seq(
		"{",
		// TODO: Add attribute / variant / etc implementation
		// optional(repeat($._statement)),
		"}"
	    )
	}
    }
)

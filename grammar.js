module.exports = grammar(
    {
        name: "usd",
	rules: {
	    // TODO: Add the actual grammar rules
	    shebang: $ => "#usda 1.0",  // TODO: make value, variable

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
	    _schema_type: $ => /[a-z0-9]+/i,

	    // TODO: Double-check what is allowed, as an identifier
	    identifier: $ => /[\p{L}_$][\p{L}\p{Nd}_$]*/,

	    string_literal: $ => choice($._string_literal, $._multiline_string_literal),

	    prim_definition: $ => seq(
		field("prim_type", choice($._class, $._def, $._over)),
		optional(field("schema_type", $._schema_type)),
		field("name", $.identifier),
	    ),

	    block: $ => seq(
		'{',
		// TODO: Add attribute / variant / etc implementation
		// repeat($._statement),
		'}'
	    )

	    // TODO: Finish
	    // _statement: $ => choice(
	    // )
	}
    }
)

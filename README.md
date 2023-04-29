tree-sitter generate

## Bootstrap
```sh
export PATH=$PATH:./node_modules/.bin
```

- Make sure string is empty

- Unittests
 - Make sure attributes can be ``blocked``

- Support @namespace        ; modules or namespaces for attributes like primvars:foo:bar
- Get prim_path stuff to match. It isn't working yet
- Make sure </prim/paths> get a proper syntax highlight group

- Consider reverting the string_literal -> string change (and digit -> float)

- Questions How do I run the unittests for treesitter highlighting
  - I saw this https://github.com/tree-sitter/tree-sitter-python/blob/master/test/highlight/keywords.py
 - How does highlighting in treesitter make its way onto Neovim?
  - tree-sitter-python has highlights at
   -
   - Eventually in Vim the highlight group for ``def foo():`` is pythonStatement | pythonFunction

   - eventually "class Foo():", the Foo is
    Treesitter
      - @variable.python links to Identifier python
      - @type.python links to Type python
      - @type.python links to Type python


 - Is there a simple item for handling string literals. Everybody seems to just mark as external and handle it in C

- Make sure highlighting works as expected
 - Allow a group so that I can
 - https://github.com/tree-sitter/tree-sitter-python/blob/master/test/highlight/keywords.py

- https://ahelwer.ca/post/2023-01-11-tree-sitter-tlaplus/

- Make sure individual types behave as expected. e.g. parsing strings (can they escape \"? Does it parse? etc)


## TODO
- Do fuzz testing for Prim names. Determine actual, allowed syntax

- Ensure types.txt tests for strings (single string, multi-line, etc)

<!-- paths = [ -->
<!--     ("foo.sdf", -->
<!--      "foo.sdf", -->
<!--      {}), -->
<!--     ("foo.sdf1!@#$%^*()-_=+[{]}|;:',<.>", -->
<!--      "foo.sdf1!@#$%^*()-_=+[{]}|;:',<.>", -->
<!--      {}), -->
<!--     ("foo.sdf:SDF_FORMAT_ARGS:a=b&c=d", -->
<!--      "foo.sdf", -->
<!--      {"a":"b", "c":"d"}), -->
<!--     ("foo.sdf?otherargs&evenmoreargs:SDF_FORMAT_ARGS:a=b&c=d", -->
<!--      "foo.sdf?otherargs&evenmoreargs", -->
<!--      {"a":"b", "c":"d"}), -->
<!-- ] -->


https://github.com/nvim-treesitter/nvim-treesitter/tree/master/queries
https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md#highlights
https://www.reddit.com/r/neovim/comments/qlp6xx/add_highlighting_to_nvimtreesitter/
https://github.com/nvim-treesitter/nvim-treesitter/blob/master/queries/python/highlights.scm


## Tests to write
### Attributes
- blocked (None) attributes (default or time sample)
- gprim syntax?
 - interpolation
  - Special, known strings ("vertex", "constant", etc)?


- fuzz testing
 - asset paths
 - prim paths
 - identifier names (of variables and such)
 - prim names


// TODO: Check if name is optional. What characters can it take? Unicode?

// TODO: Add unittest where multi-line contains 1 or 2 " within
// TODO: Make sure this works. Can prims be named with )@(*#$& special characters?

// TODO: Double-check what is allowed as an identifier. Unicode? escaped \"s?

// // TODO: Add the actual grammar rules
// shebang: $ => "#usda 1.0",  // TODO: make value, variable

- Audit all uses of $.identifier. Make sure it validates in real USD files
- TODO finish Comment - unicode
- Add permutations for things
 - empty
 - single character
 - multiple text
 - unicode
 - multiline
- Add customlayerData unittests


- Check if I can make "asset_path" consistent in attribute assigment and "arc_path" in metadata_assignment
- Consider allowing asset_path to replace arc_path if both are an option (give asset_path a higher precedence)
- Check if I can remove attribute_type. Because it can probably just be $.identifier
- Try removing some of the prec.left commands to see what is really needed
- Wondering if I should add fields for the left / right side of the timeSamples stuff

- Make sure that the type of { string foo = "asdfasdf" } and attributes is queriable
Add a "Complex everything" test, with everything at once

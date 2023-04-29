# tree-sitter-usd

This library parses USD ASCII files using [tree-sitter](https://tree-sitter.github.io/tree-sitter)
to produce a light-weight representation of the file.


## Building
TODO


## Using
TODO


## Why Tree-sitter?

In the beginning, most people use Tree-sitter for text editor syntax highlighting.

Most text editors do syntax highlighting with regex. The results on big files
are slow and error-prone. Tree-sitter has the full file's context so it is
accurate while still being fast.

But that was then and this is now. It became obvious that Tree-sitter can be
used for a lot more than just syntax highlighting. Here's some of the fun
plug-ins showing off what you can do using this USD parser.


### Neovim
#### aerial.nvim - Navigate USD Files Effortlessly
[aerial.nvim](https://github.com/stevearc/aerial.nvim)

##### Display And Move Through A Prim Tree
Effortlessly move in, out, or around any USD Prim, no matter how large it is.

https://user-images.githubusercontent.com/10103049/235325105-1490fb62-4c95-46bf-a170-50df4c7409ff.mp4


##### Prim Tree Based On Your Current Position
Many times I find myself thinking "I'm in a nested Prim but I actually need to
go one down, and over". This aerial.nvim view is super good at moving around.

https://user-images.githubusercontent.com/10103049/235325115-a74d68c6-8f2d-40dd-a7ff-d58240f9b1cd.mp4


#### Syntax Highlighting
Tree-sitter is an incremental parser. That means

- Parsing is lightning quick
- Making edits to the file doesn't require a full re-parse of the file
- WIP files with syntax errors still parse

TODO, add image


### Maintain The Current Prim Context
https://www.reddit.com/r/neovim/comments/pk1gpi/treesitter_statusline_show_code_context/
https://github.com/nvim-treesitter/nvim-treesitter-context

TODO GIF

Have you ever been viewing a huge USD file and, in the middle of viewing some
Prim, forget the name / tree of the Prim that you're viewing? This fun plug-in
keeps the Prim name pinned as you scroll so you never lose your place.


### Prim Statusline
https://github.com/SmiteshP/nvim-gps
https://www.reddit.com/r/neovim/comments/pk1gpi/treesitter_statusline_show_code_context/
TODO


### Auto-Indentation
https://github.com/nvim-treesitter/nvim-treesitter#folding
TODO


### Text Objects
https://github.com/nvim-treesitter/nvim-treesitter#incremental-selection
TODO


### Performance Profiling
https://github.com/t-troebst/perfanno.nvim
TODO


### Need A Parser? Look No Further
USD of course has parsing capabilities but, at the time of writing, most of the
parsing classes and functions are private. On top of that, it's a multi-million
like repository written in C++.

In contrast, tree-sitter

- Has no dependencies
- Has [over 10 language bindings](https://tree-sitter.github.io/tree-sitter/#language-bindings) (C, C++, Rust, Python, Swift, JavaScript, etc)
- Is a fraction of the code

Tree-sitter is easy to embed and extend, making it very attractive for plug-in authors.


### Future Improvements
There's a bunch of open-source momentum behind tree-sitter. New tools and plug-ins
may come out that further expands upon the list of reasons above. 

Some other plug-ins that could be useful in the future

https://github.com/nvim-treesitter/nvim-treesitter-refactor
https://github.com/ThePrimeagen/refactoring.nvim
https://github.com/bennypowers/nvim-regexplainer/
https://github.com/ray-x/navigator.lua
https://github.com/Olical/conjure

And others


## Bootstrap
```sh
export PATH=$PATH:./node_modules/.bin
```









// TODO: Add unittest where multi-line contains 1 or 2 " within
// TODO: Make sure this works. Can prims be named with )@(*#$& special characters?
// TODO: Double-check what is allowed as an identifier. Unicode? escaped \"s?

- Make sure string can be empty
- Make sure individual types behave as expected. e.g. parsing strings (can they escape \"? Does it parse? etc)
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

- Support @namespace        ; modules or namespaces for attributes like primvars:foo:bar
- Get prim_path stuff to match. It isn't working yet
- Make sure </prim/paths> get a proper syntax highlight group

- Consider reverting the string_literal -> string change (and digit -> float)

- Add highlighting unittests
 - https://github.com/tree-sitter/tree-sitter-python/blob/master/test/highlight/keywords.py
 - https://ahelwer.ca/post/2023-01-11-tree-sitter-tlaplus/
 - https://github.com/nvim-treesitter/nvim-treesitter/blob/master/queries/python/highlights.scm


## Tests to write
### Attributes
- gprim syntax?
 - interpolation
  - Special, known strings ("vertex", "constant", etc)?


- fuzz testing
 - asset paths
 - prim paths
 - identifier names (of variables and such)
 - prim names


- Do TODO notes in the grammar.js file
- Add customlayerData unittests


- Consider allowing asset_path to replace arc_path if both are an option (give asset_path a higher precedence)
- Try removing some of the prec.left commands to see what is really needed

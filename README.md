# tree-sitter-usd
This library parses USD ASCII files using
[tree-sitter](https://tree-sitter.github.io/tree-sitter) to produce
a light-weight grammar of the file.

For those who don't know what tree-sitter is and why you'd care to use it, see
[Why Tree-sitter?](#why-tree-sitter). For install / usage instructions, see
below.


## Disclaimer
This repository's parsing rules are subject to change.


## Building + Using
### Neovim
Make sure you include the following somewhere in your `init.lua` file.

```lua
require("nvim-treesitter.configs").setup {
    ensure_installed = {"usd"},
    parser_install_dir = installation_directory,
    highlight = { enable = true },

    -- More stuff
}
```


## Why Tree-sitter?
In the beginning, Tree-sitter was made to give text editors better syntax highlighting.

Most text editors today create syntax highlighting with regex patterns. On
large files with long line counts, this approach is slow and error-prone.

In contrast to regex, Tree-sitter actually knows about your file. It can
convert a USD file like:

```usd
#usda 1.0

def "root"
{
    custom uniform int value = 10
}
```

Into a tokenized tree like this:

```scm
(prim_definition) ; [3:1 - 2:5]
 (prim_type) ; [3:1 - 4:2]
 (string) ; [3:5 - 11:2]
 (block) ; [4:1 - 2:5]
  (attribute_assignment) ; [5:5 - 34:4]
   (custom) ; [5:5 - 11:4]
   (uniform) ; [5:12 - 19:4]
   (attribute_type) ; [5:20 - 23:4]
   (identifier) ; [5:24 - 29:4]
   (integer) ; [5:32 - 34:4]
```

That tree is built sparsely, interactively, and even works with WIP files where
you may be missing a `}` or two. Tree-sitter is accurate, fast, and getting
better all the time.

Having this tree is really powerful. It became clear very quickly to others
that Tree-sitter can be used for a lot more than just syntax highlighting.
Here's some of the fun plug-ins showing off what you can do using this USD
parser.


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

![usd_treesitter_syntax_highlighting](https://user-images.githubusercontent.com/10103049/235325800-0ef86ffc-a557-46a5-af7f-3753850c142a.png)

And the results are pretty good. My Neovim theme is
[hybrid2.nvim](https://github.com/ColinKennedy/hybrid2.nvim). If you desire
even more colors (e.g. coloring ``uniform`` as blue, instead of white), there's
already an out-of-box highlight group for that over at
[nvim-treesitter-highlights-usd](https://github.com/ColinKennedy/nvim-treesitter-highlights-usd).
In the future, this might get upstreamed to
[nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter), maybe.


### Maintain The Current Prim Context
https://user-images.githubusercontent.com/10103049/235326266-93c8e868-ed7f-47a7-bda9-238f02979e82.mp4

[nvim-treesitter-context](https://github.com/nvim-treesitter/nvim-treesitter-context)

Have you ever been viewing a huge USD file and, in the middle of viewing some
Prim, forget the name / tree of the Prim that you're viewing? This fun plug-in
keeps the Prim name pinned as you scroll so you never lose your place.


### Prim Statusline
[nvim-gps](https://github.com/SmiteshP/nvim-gps) + [winbar.nvim](https://github.com/fgheng/winbar.nvim)

https://user-images.githubusercontent.com/10103049/235326401-64be269b-5e96-4483-b6ee-995392603ef9.mp4

The top bar tracks your location in the file.


### Auto-Folding
https://user-images.githubusercontent.com/10103049/235326728-076f14d8-63fc-4c0c-b3c8-e29065bb2917.mp4

[nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter#folding)


### Text Objects
[nvim-treesitter-textobjects](https://github.com/nvim-treesitter/nvim-treesitter-textobjects)

Select, move, delete, comment, edit anything easily, using whatever mappings you desire.

In truth, most people don't have much need to edit USD files directly. But it's
a testiment to tree-sitter that the same mappings do as you expect across all
languages.


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
#### Plug-Ins
There's a bunch of open-source momentum behind tree-sitter. New tools and plug-ins
may come out that further expands upon the list of reasons above. 

Some other plug-ins that could be useful in the future

- https://github.com/nvim-treesitter/nvim-treesitter-refactor
- https://github.com/t-troebst/perfanno.nvim
- https://github.com/ThePrimeagen/refactoring.nvim
- https://github.com/bennypowers/nvim-regexplainer/
- https://github.com/ray-x/navigator.lua
- https://github.com/Olical/conjure

And others


#### Neovim 0.10+
I spotted a couple Neovim roadmap items that seem to want to make tree-sitter faster
and more async. It's already fast but more speed is definitely welcome on larger USD
files. Needless to say I'll be keeping an eye on those!

- [feat(treesitter): async parsing](https://github.com/neovim/neovim/pull/22420)
- [Tree-sitter based highlight may be inefficient](https://github.com/neovim/neovim/issues/18108)


## Testing
### Unittests
- Install the [tree-sitter-cli](https://www.npmjs.com/package/tree-sitter-cli)
```sh
cd {root}
tree-sitter test
```

All tests should pass.


### Highlighting
- Clone this repository
- Add this clone's parent directory ``"parser-directories"`` (see [Per-user
  configuration](https://tree-sitter.github.io/tree-sitter/syntax-highlighting#per-user-configuration))

If everything worked correctly, you should be able to highlight any USD file from the ``tree-sitter`` CLI like so:
```
tree-sitter highlight /path/to/file.usda
```

You should see something like this

![tree-sitter_example_usd_hightlighting](https://user-images.githubusercontent.com/10103049/235369836-1a64a111-7d61-40e2-9eda-f3fee31ff46b.png)

And the next time you run ``tree-sitter test``, highlighting information will
be in the output.

```
syntax highlighting:
  ✓ payload.usda (N assertions)
  ✓ references.usda (N assertions)
  ✓ relationship.usda (N assertions)
  ✓ specializes.usda (N assertions)
  ✓ string.usda (N assertions)

  ...
```


### Actual USD Files
The best way to test tree-sitter-usd is to parse USD files in-action.

- The [USD repository](https://github.com/PixarAnimationStudios/USD) has over 800 production USD files
- The Pixar [Kitchen set](https://openusd.org/release/dl_downloads.html#assets)
- Animal Logic's [ALab scene](https://dpel.aswf.io/alab)

The basic steps are

- Download from any of the links above
- Install the [tree-sitter-cli](https://www.npmjs.com/package/tree-sitter-cli)
- Find + parse the files. e.g.

```sh
find /path/to/your/root/usd_files/folder -name "*.usda" -type f | xargs tree-sitter parse
```

tree-sitter-usd parses all of the files, everywhere, without errors.


## Contributing
If you find a bug in a USD file, please submit an issue or pull request specifying
the expected parse and the actual results.

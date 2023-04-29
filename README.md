# tree-sitter-usd

This library parses USD ASCII files using [tree-sitter](https://tree-sitter.github.io/tree-sitter)
to produce a light-weight representation of the file.


## Building + Using

TODO Coming soon, hopefully. This repository is work in progress so it's not in a super "consumable for others" state yet. But if you'd like to try it out, the basic steps are

- Clone this repository
- Follow the steps from https://github.com/nvim-treesitter/nvim-treesitter#adding-parsers

e.g. My lazy.nvim setup looks like this:

```lua
{
    -- Useful from the documentation:
    --
    --     A parser can also be loaded manually using a full path: >
    --         vim.treesitter.require_language("python", "/path/to/python.so")
    --
    "nvim-treesitter/nvim-treesitter",
    build = ":TSUpdate",
    config = function()
        -- TODO: Remove this WIP code, later
        local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
        parser_config.usd = {
            install_info = {
                files = {"src/parser.c"},
                generate_requires_npm = false,
                requires_generate_from_grammar = true,
                url = "~/XXX/where/you/cloned/tree-sitter-usd",  -- XXX: Replace this line
            },
        }
    end,
    lazy = true,
},
```

And later in the setup...

```lua
require("nvim-treesitter.configs").setup {
    ensure_installed = {"usd"},
    parser_install_dir = installation_directory,
    highlight = { enable = true },

    -- More stuff
}
```


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

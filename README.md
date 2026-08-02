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

### Python
```sh
pip install tree-sitter-usda
```

```python
import tree_sitter_usda
from tree_sitter import Language, Parser

parser = Parser(Language(tree_sitter_usda.language()))
tree = parser.parse(b'def Xform "root"\n{\n    custom int value = 10\n}\n')

print(tree.root_node)
```

The bundled highlights query is available as
`tree_sitter_usda.HIGHLIGHTS_QUERY`.


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


### Qt
[examples/qt](examples/qt) is a runnable USD layer viewer - a `QLineEdit` which
takes a path on-disk plus a read-only, syntax highlighted `QPlainTextEdit`.

```sh
uv run --no-editable --extra example examples/qt/usda_viewer.py /path/to/some_layer.usda
```

<img width="737" height="805" alt="Image" src="https://github.com/user-attachments/assets/b3a3d1e5-010c-485f-883a-19cec61625c6" />

The example uses [Qt.py](https://github.com/mottosso/Qt.py), so the same code
runs on PySide6, PySide2, PyQt5, or PyQt6. Only its `Usda`-prefixed classes and
its layer reader know about USD - everything else works for any tree-sitter
grammar.


<details>
<summary><b>Integrating Tree-sitter With Qt</b></summary>

Qt colors text with `QSyntaxHighlighter`. It calls `highlightBlock` once per
block (one line, in a `QPlainTextEdit`) and you answer with `setFormat` calls.
tree-sitter parses whole files and answers with captured nodes. Bridging the
two is mostly a matter of translating coordinates:

```python
from Qt import QtGui
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_usda


class Highlighter(QtGui.QSyntaxHighlighter):
    def __init__(self, parent=None):
        super().__init__(parent)

        language = Language(tree_sitter_usda.language())
        self._parser = Parser(language)
        self._cursor = QueryCursor(Query(language, tree_sitter_usda.HIGHLIGHTS_QUERY))
        self._formats = {"string": _make_format("#98c379")}  # And so on, per capture

    def highlightBlock(self, text):
        # NOTE: Real code caches this parse. See examples/qt for how + why.
        source = self.document().toPlainText().encode("utf-8")
        tree = self._parser.parse(source)

        start_byte = _get_block_start_byte(source, self.currentBlock().blockNumber())
        end_byte = start_byte + len(text.encode("utf-8"))
        self._cursor.set_byte_range(start_byte, end_byte)

        for _, captures in self._cursor.matches(tree.root_node):
            for capture, nodes in captures.items():
                format_ = self._formats.get(capture)  # e.g. @spell is not a color

                if format_ is None:
                    continue

                for node in nodes:
                    # NOTE: Byte offsets are Qt offsets only while the line is ASCII
                    start = max(node.start_byte, start_byte) - start_byte
                    end = min(node.end_byte, end_byte) - start_byte
                    self.setFormat(start, end - start, format_)
```

The parts which that sketch glosses over, and which
[examples/qt](examples/qt) handles:

- **Offsets** - tree-sitter counts UTF-8 bytes, Qt counts UTF-16 code units.
  They agree until a line contains a `é` (2 bytes, 1 unit) or a `🙂` (4 bytes,
  2 units), and then every color on that line slides sideways.
- **Priority** - a highlights query captures the same text more than once on
  purpose. `(comment) @spell @comment` and `(attribute_type) @type` +
  `@type.builtin` both do. tree-sitter 0.25+ gives the last-written pattern
  priority, so sort the captures by pattern order and paint the low priority
  ones first. Qt's `setFormat` is last-write-wins, which does the rest.
- **Speed** - do not re-parse per block. Re-parse once per edit, hand the old
  tree to `Parser.parse` so tree-sitter re-uses the subtrees which did not
  change, and give each block a `QueryCursor.set_byte_range` so it is not
  querying the whole document.
- **Repaints** - Qt only re-highlights the blocks which the user typed in,
  which is not enough for multi-line constructs. Deleting the `"""` which
  opened a docstring re-interprets every line below it. `Tree.changed_ranges`
  says exactly which bytes changed meaning, so those blocks can be repainted.

</details>

See [examples/qt/README.md](examples/qt/README.md) for the details.


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

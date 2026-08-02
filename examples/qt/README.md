# USD Syntax Highlighting, In Qt

A small example which shows a USD layer, from disk, in a read-only
`QPlainTextEdit`, colored by this repository's tree-sitter grammar.

## Running It

From a checkout of this repository, using [uv](https://docs.astral.sh/uv):

```sh
uv run --no-editable --extra example examples/qt/usda_viewer.py /path/to/some_layer.usda
```

The `example` extra is `Qt.py`, `PySide6-Essentials`, and `tree-sitter`.

`--no-editable` matters. `uv run` installs this project in editable mode by
default, which points `tree_sitter_usda` at `bindings/python/tree_sitter_usda`,
and the bundled `queries/` are only copied into the package at build time. So
an editable install has no `tree_sitter_usda.queries` and
`HIGHLIGHTS_QUERY` raises `ModuleNotFoundError`.

Or, with pip and the published package:

```sh
python -m pip install tree-sitter-usda "tree-sitter~=0.25" Qt.py PySide6
python examples/qt/usda_viewer.py
python examples/qt/usda_viewer.py /path/to/some_layer.usda
```

[Qt.py](https://github.com/mottosso/Qt.py) is a binding-agnostic shim, so the
same code runs on PySide6, PySide2, PyQt5, or PyQt6. PySide6 is just what the
install lines above happen to pick. `PySide6-Essentials` is the smaller half of
PySide6 and has everything this example uses.

Install [usd-core](https://pypi.org/project/usd-core) too and the viewer can
open crate (binary `.usdc` / `.usd`) and package (`.usdz`) layers, because it
then exports them through `Sdf.Layer.ExportToString`. Without USD, only text
`.usda` layers can be shown.

## What's Here

| File | What it is |
|------|------------|
| `tree_sitter_qt/highlighter.py` | The core. A `QSyntaxHighlighter` driven by any tree-sitter grammar + `highlights.scm` query. |
| `tree_sitter_qt/themes.py` | Capture names (`@type.builtin`) to `QTextCharFormat` colors. Ships a dark and a light theme. |
| `tree_sitter_qt/editor.py` | `QPlainTextEdit` subclasses which wire a highlighter onto their own document. |
| `tree_sitter_qt/layer.py` | Reading a USD layer from disk, as text. |
| `usda_viewer.py` | The window. A `QLineEdit` for the path + a read-only view of the layer. |

Only `UsdaHighlighter` / `UsdaPlainTextEdit` / `layer.py` know about USD.
Everything else works for any tree-sitter grammar:

```python
from Qt import QtWidgets
from tree_sitter import Language
from tree_sitter_qt import TreeSitterHighlighter, TreeSitterPlainTextEdit

import tree_sitter_json

editor = TreeSitterPlainTextEdit(
    TreeSitterHighlighter(
        Language(tree_sitter_json.language()),
        open("/path/to/json/queries/highlights.scm").read(),
    ),
)
```

## Bridging tree-sitter And Qt

The two libraries disagree about nearly everything, so most of
`highlighter.py` is translation:

- **Offsets**: tree-sitter counts **UTF-8 bytes**. Qt counts **UTF-16 code
  units**. `é` is 2 bytes but 1 unit, `🙂` is 4 bytes but 2 units, so on any
  non-ASCII line the colors slide sideways unless the offsets are converted.
  `_to_qt_offset` is that conversion (and short-circuits for ASCII, which is
  nearly every line of a real layer).
- **Scope**: tree-sitter parses whole documents. `QSyntaxHighlighter` asks for
  one block (one line) at a time. `_get_line_starts` maps Qt's block numbers to
  tree-sitter's byte offsets, and `QueryCursor.set_byte_range` keeps each block
  from re-querying the entire file.
- **Priority**: a query captures the same text more than once, on purpose.
  `(comment) @spell @comment` and `(attribute_type) @type` +
  `@type.builtin` both do. tree-sitter 0.25+ (like Neovim) gives the
  **last-written** pattern priority, so spans are sorted by pattern order and
  painted low priority first. Qt's last-write-wins `setFormat` does the rest.
- **Capture names**: a theme doesn't need an entry per capture.
  `@comment.documentation` falls back to `comment`, and captures which are not
  colors at all (`@spell`) resolve to nothing and are skipped.
- **Edits**: Qt reports edits *after* they happen, in UTF-16 units, to a signal
  which `QSyntaxHighlighter` already listens to. Rather than depend on that,
  the highlighter marks itself stale, then diffs the old and new source to
  recover the byte range which changed. tree-sitter re-uses every subtree
  outside of it, so typing in a large layer re-parses in microseconds. The
  document is re-parsed once per edit, not once per line.
- **Repaints**: Qt only re-highlights the blocks which the user typed in, which
  is not enough for a language with multi-line constructs. Deleting the `"""`
  which opened a docstring re-interprets every line after it. Instead of the
  usual `setCurrentBlockState` bookkeeping, `Tree.changed_ranges` says exactly
  which bytes changed meaning and those blocks are queued for a repaint.

## Where To Take It

The highlighter keeps the parse tree around (`highlighter.tree`), and a parse
tree is worth much more than colors. From here you could add a prim outline
(`QTreeView` over `def` / `class` / `over` nodes), fold `{}` blocks, jump to the
prim under the cursor, or underline `ERROR` nodes as you type.

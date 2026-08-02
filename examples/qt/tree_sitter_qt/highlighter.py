"""The bridge between tree-sitter's parse trees and Qt's text formatting.

tree-sitter and Qt disagree on almost every detail:

- tree-sitter indexes source code by **UTF-8 byte** offsets. Qt indexes text by
  **UTF-16 code unit** offsets. The two only agree while the text is ASCII.
- tree-sitter parses a whole document at once. ``QSyntaxHighlighter`` asks for
  one :class:`QtGui.QTextBlock` (one line, for a QPlainTextEdit) at a time.
- tree-sitter reports overlapping captures and expects the caller to decide
  which one wins. Qt just paints whatever it is given, last write winning.

:class:`TreeSitterHighlighter` is the piece which reconciles all of that.

"""

from __future__ import annotations

import bisect
from collections.abc import Sequence
from typing import NamedTuple

from Qt import QtCore, QtGui
from tree_sitter import Language, Node, Parser, Point, Query, QueryCursor, Tree

import tree_sitter_usda

from . import themes

_NEWLINE = b"\n"


class _Span(NamedTuple):
    """A single, resolved highlight for some byte range of the source code.

    Attributes:
        pattern: The 0-based index of the query pattern which matched.
        capture_order: Where the capture was written within its own pattern.
        capture: The tree-sitter capture name, e.g. "type.builtin".
        start: The absolute, document-wide start byte of the highlight.
        end: The absolute, document-wide end byte of the highlight.

    """

    pattern: int
    capture_order: int
    capture: str
    start: int
    end: int


class _Edit(NamedTuple):
    """A description of how some source code changed, in tree-sitter's terms.

    Attributes:
        start_byte: Where, in both the old and new source, the change begins.
        old_end_byte: Where the changed region used to end.
        new_end_byte: Where the changed region now ends.
        start_point: The (row, column) form of ``start_byte``.
        old_end_point: The (row, column) form of ``old_end_byte``.
        new_end_point: The (row, column) form of ``new_end_byte``.

    """

    start_byte: int
    old_end_byte: int
    new_end_byte: int
    start_point: Point
    old_end_point: Point
    new_end_point: Point


class TreeSitterHighlighter(QtGui.QSyntaxHighlighter):
    """Paint a Qt document using any tree-sitter language + highlights query.

    This class knows nothing about USD. Give it a :class:`Language` and the
    text of a ``highlights.scm`` query and it highlights that language. See
    :class:`UsdaHighlighter` for the USD-flavored subclass.

    """

    def __init__(
        self,
        language: Language,
        highlights: str,
        theme: themes.Theme | None = None,
        parent: QtGui.QTextDocument | None = None,
    ) -> None:
        """Set up the parser and query which this highlighter runs.

        Args:
            language: A loaded tree-sitter grammar. e.g.
                ``Language(tree_sitter_usda.language())``.
            highlights: The contents of a ``highlights.scm`` query. e.g.
                ``tree_sitter_usda.HIGHLIGHTS_QUERY``.
            theme: The capture name to color mapping to paint with. If the
                theme is not given, a dark theme is used.
            parent: The document to highlight, if it is known up-front.

        """
        # NOTE: The document is attached below, with `setDocument`, instead of
        # here. See `setDocument` for why that matters.
        #
        super().__init__(None)

        self._parser = Parser(language)
        self._query = Query(language, highlights)
        self._cursor = QueryCursor(self._query)
        self._theme = theme or themes.DARK_THEME

        self._tree: Tree | None = None
        self._source = b""
        self._line_starts: list[int] = [0]
        self._dirty = True
        self._stale: list[tuple[int, int]] = []
        self._repainting = False

        # NOTE: The timer is a child of this highlighter on purpose. A pending
        # repaint dies with the highlighter, instead of firing at a deleted
        # object later on.
        #
        self._repaint_timer = QtCore.QTimer(self)
        self._repaint_timer.setInterval(0)
        self._repaint_timer.setSingleShot(True)
        self._repaint_timer.timeout.connect(self._repaint_stale_blocks)

        if parent is not None:
            # NOTE: Matching what ``QSyntaxHighlighter(document)`` would do.
            # The document owns this highlighter so that it lives exactly as
            # long as the text which it paints.
            #
            self.setParent(parent)
            self.setDocument(parent)

    @property
    def theme(self) -> themes.Theme:
        """The capture name to color mapping which this instance paints with."""
        return self._theme

    @property
    def tree(self) -> Tree | None:
        """The most recent parse of the highlighted document, if any.

        The tree is a full syntax tree, not just highlight data. Subclasses (or
        callers) can walk it for outlines, folding ranges, "go to definition",
        or anything else which tree-sitter is good at.

        """
        return self._tree

    def set_theme(self, theme: themes.Theme) -> None:
        """Repaint the document using some other ``theme``.

        Args:
            theme: The capture name to color mapping to paint with, from now on.

        """
        self._theme = theme
        self.rehighlight()

    def setDocument(self, document: QtGui.QTextDocument | None) -> None:  # noqa: N802
        """Highlight ``document`` from now on, instead of the current one.

        Args:
            document: Whatever text should be painted from now on, if anything.

        """
        previous = self.document()

        if previous is not None:
            previous.contentsChange.disconnect(self._mark_dirty)

        if document is not None:
            # NOTE: Qt calls slots in the order that they were connected and
            # ``QSyntaxHighlighter`` connects to ``contentsChange`` in the very
            # next line, to re-format the changed blocks. Connecting first is
            # what guarantees that the parse tree is marked stale **before**
            # `highlightBlock` is asked to paint using it.
            #
            document.contentsChange.connect(self._mark_dirty)

        super().setDocument(document)

        self._mark_dirty()

    def highlightBlock(self, text: str) -> None:  # noqa: N802
        """Color one line of the document. Qt calls this, we don't.

        Args:
            text: The current block's text, without its trailing newline.

        """
        tree = self._get_tree()

        if tree is None:
            return

        block = self.currentBlock()
        line = block.blockNumber()

        if line >= len(self._line_starts):
            # NOTE: The document changed underneath us. Qt will call this
            # method again, with a matching tree, once it catches up.
            #
            return

        start_byte = self._line_starts[line]
        block_source = text.encode("utf-8")
        end_byte = start_byte + len(block_source)

        for span in self._get_spans(tree.root_node, start_byte, end_byte):
            format_ = self._theme.format_for(span.capture)

            if format_ is None:
                # NOTE: e.g. `@spell`, which is a text editor hint, not a color
                continue

            # NOTE: A capture may start on a previous line and / or end on a
            # later one. e.g. a multi-line string. Clip it to this block.
            #
            start = _to_qt_offset(block_source, max(span.start, start_byte) - start_byte)
            end = _to_qt_offset(block_source, min(span.end, end_byte) - start_byte)

            if end > start:
                self.setFormat(start, end - start, format_)

    def _get_spans(self, root: Node, start_byte: int, end_byte: int) -> Sequence[_Span]:
        """Find every highlight which touches the ``start_byte`` to ``end_byte`` range.

        Args:
            root: The root of the parse tree to query.
            start_byte: The first byte of the line to highlight.
            end_byte: The last byte (exclusive) of the line to highlight.

        Returns:
            The highlights, ordered from lowest to highest priority.

        """
        # NOTE: This is the whole reason this method is fast. Without a byte
        # range, every block would re-query the entire document, making
        # highlighting O(document * lines) instead of O(document).
        #
        self._cursor.set_byte_range(start_byte, end_byte)
        spans: list[_Span] = []

        for pattern, captures in self._cursor.matches(root):
            for capture_order, (capture, nodes) in enumerate(captures.items()):
                for node in nodes:
                    if node.end_byte > start_byte and node.start_byte < end_byte:
                        spans.append(
                            _Span(pattern, capture_order, capture, node.start_byte, node.end_byte)
                        )

        # NOTE: tree-sitter 0.25+ (and Neovim) give the **last** written pattern
        # priority. Sorting ascending and letting later spans overwrite earlier
        # ones in `highlightBlock` reproduces that. Within a single pattern, the
        # last capture wins too, which is what makes `(comment) @spell @comment`
        # paint as a comment.
        #
        spans.sort(key=lambda span: (span.pattern, span.capture_order))

        return spans

    def _mark_dirty(self, position: int = 0, removed: int = 0, added: int = 0) -> None:
        """Note that the document changed, so the parse tree must be redone.

        Args:
            position: Where, in Qt's UTF-16 units, the document changed.
            removed: How many characters were deleted at ``position``.
            added: How many characters were inserted at ``position``.

        """
        # NOTE: The arguments are ignored on purpose. Qt reports edits in
        # UTF-16 units, tree-sitter needs UTF-8 bytes **and** (row, column)
        # points, and Qt reports the edit only after the fact. Recovering all
        # of that by diffing (see ``_get_edit``) is simpler and, importantly,
        # survives undo / redo and multi-cursor edits, which arrive as several
        # signals before a single re-highlight.
        #
        if not self._repainting:
            self._dirty = True

    def _repaint_stale_blocks(self) -> None:
        """Re-color every block which the last re-parse changed the meaning of.

        Qt only re-highlights the blocks which the user typed in. That is not
        always enough. Deleting the ``\"\"\"`` which opened a docstring, or the
        ``(`` which opened a metadata block, re-interprets every line after it
        even though none of them changed. tree-sitter knows exactly which byte
        ranges changed meaning, so this repaints those, and only those.

        """
        stale, self._stale = self._stale, []
        document = self.document()

        if not stale or document is None:
            return

        # NOTE: Re-highlighting marks the document dirty, which would re-parse
        # (and re-schedule) forever. The text isn't changing here, so ignore
        # the signals which this method causes.
        #
        self._repainting = True

        try:
            for start_byte, end_byte in stale:
                first = _to_line(self._line_starts, start_byte)
                last = _to_line(self._line_starts, max(end_byte - 1, start_byte))

                for number in range(first, last + 1):
                    block = document.findBlockByNumber(number)

                    if block.isValid():
                        self.rehighlightBlock(block)
        finally:
            self._repainting = False

    def _get_tree(self) -> Tree | None:
        """Get an up-to-date parse of the current document, re-parsing if needed.

        Returns:
            The parse tree, unless this highlighter has no document.

        """
        document = self.document()

        if document is None:
            return None

        # NOTE: Qt calls `highlightBlock` once per changed block but the
        # document only changes once per edit. So this re-parses once per edit,
        # not once per line.
        #
        if not self._dirty:
            return self._tree

        source = document.toPlainText().encode("utf-8")
        previous = self._tree

        if previous is None:
            self._tree = self._parser.parse(source)
        else:
            edit = _get_edit(self._source, source)

            if edit is not None:
                # NOTE: Telling the old tree what changed lets tree-sitter
                # re-use every subtree which didn't. Typing in a 10k line layer
                # re-parses in microseconds instead of milliseconds.
                #
                previous.edit(**edit._asdict())

            self._tree = self._parser.parse(source, previous)

        self._source = source
        self._line_starts = _get_line_starts(source)
        self._dirty = False

        if previous is not None:
            self._stale = [
                (range_.start_byte, range_.end_byte)
                for range_ in previous.changed_ranges(self._tree)
            ]

            if self._stale:
                # NOTE: Qt is in the middle of its own re-format pass right
                # now, and `rehighlightBlock` must not run inside one. Queue
                # the repaint for as soon as that pass is over.
                #
                self._repaint_timer.start()

        return self._tree


class UsdaHighlighter(TreeSitterHighlighter):
    """Paint a Qt document as if it were a USD (.usda) layer."""

    def __init__(
        self,
        theme: themes.Theme | None = None,
        parent: QtGui.QTextDocument | None = None,
    ) -> None:
        """Load the USD grammar + its bundled highlights query.

        Args:
            theme: The capture name to color mapping to paint with. If the
                theme is not given, a dark theme is used.
            parent: The document to highlight, if it is known up-front.

        """
        super().__init__(
            Language(tree_sitter_usda.language()),
            tree_sitter_usda.HIGHLIGHTS_QUERY,
            theme=theme,
            parent=parent,
        )


def _get_common_prefix(old: bytes, new: bytes) -> int:
    """Count the bytes which ``old`` and ``new`` start with, in common.

    Args:
        old: Some source code, from before an edit.
        new: The same source code, after an edit.

    Returns:
        A 0-or-more byte count.

    """
    # NOTE: This is a binary search on purpose. Comparing byte-by-byte in
    # Python is slow but slicing + `==` runs at C speed, so a megabyte-sized
    # layer only costs ~20 comparisons.
    #
    low, high = 0, min(len(old), len(new))

    while low < high:
        middle = (low + high + 1) // 2

        if old[:middle] == new[:middle]:
            low = middle
        else:
            high = middle - 1

    return low


def _get_common_suffix(old: bytes, new: bytes, limit: int) -> int:
    """Count the bytes which ``old`` and ``new`` end with, in common.

    Args:
        old: Some source code, from before an edit.
        new: The same source code, after an edit.
        limit: The most bytes to consider. Usually "whatever the common prefix
            did not already claim", so that the prefix and suffix don't overlap.

    Returns:
        A 0-or-more byte count.

    """
    low, high = 0, limit

    while low < high:
        middle = (low + high + 1) // 2

        if old[len(old) - middle :] == new[len(new) - middle :]:
            low = middle
        else:
            high = middle - 1

    return low


def _get_edit(old: bytes, new: bytes) -> _Edit | None:
    """Describe how ``old`` became ``new``, the way ``Tree.edit`` wants it.

    Qt's ``QTextDocument.contentsChange`` signal reports edits but it fires
    *after* the change, in UTF-16 units, and ``QSyntaxHighlighter`` connects to
    it first. Rather than fight that ordering, this function recovers the edit
    by diffing the old and new source. tree-sitter only needs a range which
    *contains* every change, so a common prefix / suffix diff is enough, even
    when the user pastes over a selection or undoes several edits at once.

    Args:
        old: Some source code, from before an edit.
        new: The same source code, after an edit.

    Returns:
        The change, unless ``old`` and ``new`` are identical.

    """
    if old == new:
        return None

    start = _get_common_prefix(old, new)
    suffix = _get_common_suffix(old, new, min(len(old), len(new)) - start)
    old_end = len(old) - suffix
    new_end = len(new) - suffix

    return _Edit(
        start_byte=start,
        old_end_byte=old_end,
        new_end_byte=new_end,
        start_point=_to_point(old, start),
        old_end_point=_to_point(old, old_end),
        new_end_point=_to_point(new, new_end),
    )


def _get_line_starts(source: bytes) -> list[int]:
    """Find the byte offset which every line of ``source`` begins at.

    Qt hands out blocks by index. tree-sitter hands out captures by byte. This
    table is what turns one into the other.

    Args:
        source: The UTF-8 encoded text of a whole document.

    Returns:
        One byte offset per line. The first is always 0.

    """
    starts = [0]
    index = source.find(_NEWLINE)

    while index != -1:
        starts.append(index + 1)
        index = source.find(_NEWLINE, index + 1)

    return starts


def _to_line(line_starts: Sequence[int], offset: int) -> int:
    """Find which line of a document some byte ``offset`` lands on.

    Args:
        line_starts: Every line's starting byte, from :func:`_get_line_starts`.
        offset: An absolute, document-wide byte position.

    Returns:
        A 0-or-more line index, which is also Qt's block number.

    """
    return max(bisect.bisect_right(line_starts, offset) - 1, 0)


def _to_point(source: bytes, offset: int) -> Point:
    """Convert a byte ``offset`` into the (row, column) which tree-sitter wants.

    Args:
        source: The UTF-8 encoded text which ``offset`` points into.
        offset: An absolute, document-wide byte position.

    Returns:
        The row and column. Note: tree-sitter columns are counted in **bytes**.

    """
    row = source.count(_NEWLINE, 0, offset)
    column = offset - (source.rfind(_NEWLINE, 0, offset) + 1)
    point: Point = Point(row, column)

    return point


def _to_qt_offset(source: bytes, offset: int) -> int:
    """Convert a UTF-8 byte ``offset`` into the UTF-16 offset which Qt wants.

    ``QSyntaxHighlighter.setFormat`` counts in UTF-16 code units because that
    is how QString stores text. So a "é" is 2 bytes to tree-sitter but 1 unit
    to Qt, and a "🙂" is 4 bytes to tree-sitter but *2* units to Qt. Getting
    this wrong makes highlights drift sideways on any non-ASCII line.

    Args:
        source: The UTF-8 encoded text of a single block (line).
        offset: A block-relative byte position.

    Returns:
        The equivalent, block-relative Qt position.

    """
    prefix = source[:offset]

    if prefix.isascii():
        # NOTE: The overwhelmingly common case. 1 byte == 1 code unit.
        return len(prefix)

    return len(prefix.decode("utf-8", errors="replace").encode("utf-16-le")) // 2

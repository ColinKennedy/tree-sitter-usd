"""Capture-name to Qt color mappings, used to paint tree-sitter highlights."""

from __future__ import annotations

import dataclasses
from collections.abc import Mapping

from Qt import QtGui


@dataclasses.dataclass(frozen=True)
class Style:
    """A single, binding-agnostic description of how some text should look.

    Attributes:
        color: A ``"#rrggbb"`` foreground color, if any.
        background: A ``"#rrggbb"`` background color, if any.
        bold: If True, draw the text with a heavier weight.
        italic: If True, slant the text.
        underline: If True, draw a line under the text.

    """

    color: str | None = None
    background: str | None = None
    bold: bool = False
    italic: bool = False
    underline: bool = False

    def to_format(self) -> QtGui.QTextCharFormat:
        """Convert this instance into the Qt equivalent.

        Returns:
            The generated, Qt-aware description of this instance.

        """
        format_ = QtGui.QTextCharFormat()

        if self.color:
            format_.setForeground(QtGui.QColor(self.color))

        if self.background:
            format_.setBackground(QtGui.QColor(self.background))

        if self.bold:
            format_.setFontWeight(QtGui.QFont.Weight.Bold)

        if self.italic:
            format_.setFontItalic(True)

        if self.underline:
            format_.setFontUnderline(True)

        return format_


class Theme:
    """A lookup of tree-sitter capture names (e.g. ``@type.builtin``) to colors.

    Capture names are resolved from the most specific name to the least
    specific one. ``@comment.documentation`` prefers a "comment.documentation"
    style but falls back to "comment" if the theme doesn't define one. Names
    that resolve to nothing (like ``@spell``, which is a hint for text editors
    and not a color) simply aren't painted.

    """

    def __init__(
        self,
        styles: Mapping[str, Style],
        foreground: str = "#000000",
        background: str = "#ffffff",
    ) -> None:
        """Keep the theme's colors and prepare its (lazy) Qt format cache.

        Args:
            styles: Each capture name, e.g. "type.builtin", and how to draw it.
            foreground: The ``"#rrggbb"`` color for any unhighlighted text.
            background: The ``"#rrggbb"`` color to paint behind all text.

        """
        super().__init__()

        self._styles = dict(styles)
        self._formats: dict[str, QtGui.QTextCharFormat | None] = {}
        self.foreground = foreground
        self.background = background

    def format_for(self, capture: str) -> QtGui.QTextCharFormat | None:
        """Find the Qt format for some tree-sitter ``capture`` name.

        Args:
            capture: A tree-sitter capture, e.g. "type.builtin" or "comment".

        Returns:
            The format to paint with, if this theme has a style for ``capture``.

        """
        if capture in self._formats:
            return self._formats[capture]

        format_: QtGui.QTextCharFormat | None = None
        name = capture

        while name:
            style = self._styles.get(name)

            if style:
                format_ = style.to_format()

                break

            name, _, _ = name.rpartition(".")

        # NOTE: Formats are cached because QSyntaxHighlighter re-highlights
        # blocks constantly and re-creating a QTextCharFormat per capture,
        # per block, adds up quickly.
        #
        self._formats[capture] = format_

        return format_


DARK_THEME = Theme(
    {
        "boolean": Style(color="#d19a66"),
        "comment": Style(color="#5c6370", italic=True),
        "comment.documentation": Style(color="#7f848e", italic=True),
        "constant.builtin": Style(color="#d19a66"),
        "float": Style(color="#d19a66"),
        "function.builtin": Style(color="#c678dd", italic=True),
        "function.call": Style(color="#61afef"),
        "keyword": Style(color="#c678dd"),
        "keyword.function": Style(color="#c678dd", bold=True),
        "namespace": Style(color="#e5c07b"),
        "number": Style(color="#d19a66"),
        "operator": Style(color="#56b6c2"),
        "property": Style(color="#e06c75"),
        "punctuation.bracket": Style(color="#abb2bf"),
        "punctuation.delimiter": Style(color="#abb2bf"),
        "string": Style(color="#98c379"),
        "string.special": Style(color="#98c379", bold=True),
        "text.uri": Style(color="#56b6c2", underline=True),
        "type": Style(color="#e5c07b"),
        "type.builtin": Style(color="#e5c07b", bold=True),
        "variable": Style(color="#abb2bf"),
    },
    foreground="#abb2bf",
    background="#282c34",
)

LIGHT_THEME = Theme(
    {
        "boolean": Style(color="#986801"),
        "comment": Style(color="#a0a1a7", italic=True),
        "comment.documentation": Style(color="#8a8b90", italic=True),
        "constant.builtin": Style(color="#986801"),
        "float": Style(color="#986801"),
        "function.builtin": Style(color="#a626a4", italic=True),
        "function.call": Style(color="#4078f2"),
        "keyword": Style(color="#a626a4"),
        "keyword.function": Style(color="#a626a4", bold=True),
        "namespace": Style(color="#c18401"),
        "number": Style(color="#986801"),
        "operator": Style(color="#0184bc"),
        "property": Style(color="#e45649"),
        "punctuation.bracket": Style(color="#383a42"),
        "punctuation.delimiter": Style(color="#383a42"),
        "string": Style(color="#50a14f"),
        "string.special": Style(color="#50a14f", bold=True),
        "text.uri": Style(color="#0184bc", underline=True),
        "type": Style(color="#c18401"),
        "type.builtin": Style(color="#c18401", bold=True),
        "variable": Style(color="#383a42"),
    },
    foreground="#383a42",
    background="#fafafa",
)

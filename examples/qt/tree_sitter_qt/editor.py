"""Qt text widgets which syntax highlight themselves using tree-sitter."""

from __future__ import annotations

from Qt import QtGui, QtWidgets

from . import highlighter as highlighter_
from . import themes


class TreeSitterPlainTextEdit(QtWidgets.QPlainTextEdit):
    r"""A QPlainTextEdit which colors itself using any tree-sitter grammar.

    Example:
        >>> from tree_sitter import Language
        >>> import tree_sitter_usda
        >>>
        >>> editor = TreeSitterPlainTextEdit(
        ...     TreeSitterHighlighter(
        ...         Language(tree_sitter_usda.language()),
        ...         tree_sitter_usda.HIGHLIGHTS_QUERY,
        ...     ),
        ... )
        >>> editor.setPlainText('def "Root"\n{\n}\n')

    """

    def __init__(
        self,
        highlighter: highlighter_.TreeSitterHighlighter,
        parent: QtWidgets.QWidget | None = None,
    ) -> None:
        """Create the widget and attach ``highlighter`` to its document.

        Args:
            highlighter: Whatever will paint this widget's text.
            parent: An owner for this widget, if any.

        """
        super().__init__(parent)

        self._highlighter = highlighter
        self._highlighter.setParent(self.document())
        self._highlighter.setDocument(self.document())

        self._initialize_appearance()
        self.set_theme(self._highlighter.theme)

    @property
    def highlighter(self) -> highlighter_.TreeSitterHighlighter:
        """The object which paints this widget's document."""
        return self._highlighter

    def _initialize_appearance(self) -> None:
        """Make this widget look like a code editor instead of a text box."""
        font = QtGui.QFontDatabase.systemFont(QtGui.QFontDatabase.SystemFont.FixedFont)
        font.setPointSize(max(font.pointSize(), 10))
        font.setStyleHint(QtGui.QFont.StyleHint.Monospace)
        self.setFont(font)

        self.setLineWrapMode(QtWidgets.QPlainTextEdit.LineWrapMode.NoWrap)
        self.setTabStopDistance(QtGui.QFontMetricsF(font).horizontalAdvance(" ") * 4)

    def set_theme(self, theme: themes.Theme) -> None:
        """Repaint this widget, and its text, using some other ``theme``.

        Args:
            theme: The capture name to color mapping to paint with, from now on.

        """
        self._highlighter.set_theme(theme)

        palette = self.palette()
        palette.setColor(QtGui.QPalette.ColorRole.Base, QtGui.QColor(theme.background))
        palette.setColor(QtGui.QPalette.ColorRole.Text, QtGui.QColor(theme.foreground))
        self.setPalette(palette)


class UsdaPlainTextEdit(TreeSitterPlainTextEdit):
    """A QPlainTextEdit which colors itself as if its text were a USD layer."""

    def __init__(
        self,
        theme: themes.Theme | None = None,
        parent: QtWidgets.QWidget | None = None,
    ) -> None:
        """Create the widget and attach a USD highlighter to its document.

        Args:
            theme: The capture name to color mapping to paint with. If the
                theme is not given, a dark theme is used.
            parent: An owner for this widget, if any.

        """
        super().__init__(highlighter_.UsdaHighlighter(theme=theme), parent=parent)

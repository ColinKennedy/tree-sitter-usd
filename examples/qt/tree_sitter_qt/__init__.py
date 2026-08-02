"""Paint tree-sitter syntax highlights onto Qt text widgets."""

from .editor import TreeSitterPlainTextEdit, UsdaPlainTextEdit
from .highlighter import TreeSitterHighlighter, UsdaHighlighter
from .themes import DARK_THEME, LIGHT_THEME, Style, Theme

__all__ = [
    "DARK_THEME",
    "LIGHT_THEME",
    "Style",
    "Theme",
    "TreeSitterHighlighter",
    "TreeSitterPlainTextEdit",
    "UsdaHighlighter",
    "UsdaPlainTextEdit",
]

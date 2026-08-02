#!/usr/bin/env python
"""A tiny USD layer viewer. Type a path, read a syntax highlighted layer.

Run it like this:

::

    python usda_viewer.py
    python usda_viewer.py /path/to/some_layer.usda

"""

from __future__ import annotations

import os
import sys

from Qt import QtCore, QtWidgets
from tree_sitter_qt import editor, layer, themes

_THEMES = {"Dark": themes.DARK_THEME, "Light": themes.LIGHT_THEME}


class UsdaViewer(QtWidgets.QWidget):
    """A path field + a read-only, syntax highlighted view of that path."""

    def __init__(self, parent: QtWidgets.QWidget | None = None) -> None:
        """Create every child widget and connect them to each other.

        Args:
            parent: An owner for this widget, if any.

        """
        super().__init__(parent)

        self._path = QtWidgets.QLineEdit()
        self._path.setPlaceholderText("/path/to/some_layer.usda")
        self._path.setClearButtonEnabled(True)

        self._browse = QtWidgets.QPushButton("Browse...")
        self._theme = QtWidgets.QComboBox()
        self._theme.addItems(sorted(_THEMES))

        self._viewer = editor.UsdaPlainTextEdit()
        self._viewer.setReadOnly(True)
        self._viewer.setPlaceholderText("Choose a USD layer to view it here.")

        self._status = QtWidgets.QLabel()
        self._status.setWordWrap(True)

        # NOTE: Re-reading the layer on every keystroke would hit the disk far
        # too often. Wait until the user pauses, instead.
        #
        self._timer = QtCore.QTimer(self)
        self._timer.setInterval(400)
        self._timer.setSingleShot(True)

        self._initialize_layout()
        self._initialize_default_settings()
        self._initialize_interactive_settings()

    def _initialize_default_settings(self) -> None:
        """Apply the starting theme and clear the status line."""
        self._theme.setCurrentText("Dark")
        self._set_status("")

    def _initialize_interactive_settings(self) -> None:
        """Make every widget respond to the user."""
        self._browse.clicked.connect(self._browse_for_layer)
        self._path.textChanged.connect(self._timer.start)
        self._path.returnPressed.connect(self._load_layer)
        self._theme.currentTextChanged.connect(self._change_theme)
        self._timer.timeout.connect(self._load_layer)

    def _initialize_layout(self) -> None:
        """Place every child widget within this instance."""
        header = QtWidgets.QHBoxLayout()
        header.addWidget(QtWidgets.QLabel("USD Layer:"))
        header.addWidget(self._path, stretch=1)
        header.addWidget(self._browse)
        header.addWidget(self._theme)

        main_layout = QtWidgets.QVBoxLayout(self)
        main_layout.addLayout(header)
        main_layout.addWidget(self._viewer, stretch=1)
        main_layout.addWidget(self._status)

    def _browse_for_layer(self) -> None:
        """Ask the user for a USD layer on-disk and then display it."""
        start = os.path.dirname(self._path.text()) or os.getcwd()
        path, _ = QtWidgets.QFileDialog.getOpenFileName(
            self,
            "Select A USD Layer",
            start,
            "USD Layers (*.usd *.usda *.usdc *.usdz);;All Files (*)",
        )

        if path:
            self.set_path(path)

    def _change_theme(self, name: str) -> None:
        """Repaint the viewer using the ``name`` theme.

        Args:
            name: A key of ``_THEMES``. e.g. "Dark".

        """
        self._viewer.set_theme(_THEMES[name])

    def _load_layer(self) -> None:
        """Read the current path and show it, or explain why we couldn't."""
        self._timer.stop()
        path = self._path.text().strip()

        if not path:
            self._viewer.clear()
            self._set_status("")

            return

        try:
            text = layer.read_layer_text(path)
        except layer.LayerError as error:
            self._viewer.clear()
            self._set_status(str(error), error=True)

            return

        self._viewer.setPlainText(text)
        lines = text.count("\n") + 1
        self._set_status(f'Loaded {lines} lines from "{path}".')

    def _set_status(self, text: str, error: bool = False) -> None:
        """Report ``text`` under the viewer.

        Args:
            text: Whatever the user should know. An empty string hides the line.
            error: If True, draw ``text`` as a problem instead of as an update.

        """
        self._status.setText(text)
        self._status.setStyleSheet("color: #e06c75;" if error else "")
        self._status.setVisible(bool(text))

    def set_path(self, path: str) -> None:
        """Show the USD layer located at ``path``.

        Args:
            path: An absolute or relative path to a USD layer on-disk.

        """
        self._path.setText(path)
        self._load_layer()


def main(argv: list[str] | None = None) -> int:
    """Run the viewer until the user closes it.

    Args:
        argv: The command-line arguments. The first, if any, is a USD layer.

    Returns:
        The Qt exit code.

    """
    argv = sys.argv[1:] if argv is None else argv
    application = QtWidgets.QApplication(sys.argv[:1])

    viewer = UsdaViewer()
    viewer.setWindowTitle("USD Layer Viewer")
    viewer.resize(960, 720)

    if argv:
        viewer.set_path(argv[0])

    viewer.show()

    exit_code: int = application.exec_()

    return exit_code


if __name__ == "__main__":
    sys.exit(main())

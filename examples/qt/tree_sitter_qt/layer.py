"""Read the text of a USD layer, from disk."""

from __future__ import annotations

import os

_CRATE_MAGIC = b"PXR-USDC"
_ZIP_MAGIC = b"PK\x03\x04"


class LayerError(Exception):
    """Any reason why a USD layer could not be shown as text."""


def read_layer_text(path: str) -> str:
    r"""Get ``path`` as ``.usda`` source code.

    If USD's Python bindings are importable, the layer is exported through
    ``Sdf``, which means crate (``.usdc`` / binary ``.usd``) and package
    (``.usdz``) layers work too. If they aren't importable, ``path`` is read
    as plain text.

    Args:
        path: An absolute or relative path to a USD layer on-disk.

    Raises:
        LayerError: If ``path`` isn't a file or cannot be shown as text.

    Returns:
        The layer's contents, using ``"\\n"`` newlines.

    """
    if not os.path.isfile(path):
        raise LayerError(f'Path "{path}" is not a file on-disk.')

    text = _read_with_usd(path)

    if text is None:
        text = _read_as_text(path)

    # NOTE: QTextDocument treats "\r" as its own character, which would push
    # every tree-sitter byte offset on the line out of alignment. Normalize.
    #
    return text.replace("\r\n", "\n").replace("\r", "\n")


def _read_as_text(path: str) -> str:
    """Read ``path`` directly, assuming that it is ``.usda`` source code.

    Args:
        path: An absolute or relative path to a USD layer on-disk.

    Raises:
        LayerError: If ``path`` is a binary layer or isn't UTF-8 text.

    Returns:
        The layer's contents.

    """
    with open(path, "rb") as handler:
        blob = handler.read()

    if blob.startswith(_CRATE_MAGIC) or blob.startswith(_ZIP_MAGIC):
        raise LayerError(
            f'Path "{path}" is a binary USD layer. Install USD '
            "(``pip install usd-core``) to view it as text."
        )

    try:
        return blob.decode("utf-8")
    except UnicodeDecodeError:
        raise LayerError(f'Path "{path}" is not UTF-8 text.') from None


def _read_with_usd(path: str) -> str | None:
    """Export ``path`` to ``.usda`` source code, using USD's Python bindings.

    Args:
        path: An absolute or relative path to a USD layer on-disk.

    Raises:
        LayerError: If USD is importable but cannot open ``path``.

    Returns:
        The layer's contents, if USD is importable.

    """
    try:
        from pxr import Sdf
    except ImportError:
        return None

    layer = Sdf.Layer.FindOrOpen(path)

    if not layer:
        raise LayerError(f'Path "{path}" could not be opened as a USD layer.')

    text: str = layer.ExportToString()

    return text

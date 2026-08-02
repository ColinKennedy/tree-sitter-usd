"""USD grammar for tree-sitter."""

from importlib.resources import files as _files

from ._binding import language


def _get_query(name: str, file: str) -> str:
    """Read ``file`` from this package's bundled queries and cache it as ``name``."""
    query: str = (_files(f"{__package__}.queries") / file).read_text()
    globals()[name] = query

    return query


def __getattr__(name: str) -> str:
    """Load one of this module's queries, the first time that it is requested."""
    if name == "HIGHLIGHTS_QUERY":
        return _get_query("HIGHLIGHTS_QUERY", "highlights.scm")

    raise AttributeError(f"module {__name__!r} has no attribute {name!r}")


__all__ = ["HIGHLIGHTS_QUERY", "language"]

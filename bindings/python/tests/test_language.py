"""Make sure the compiled C extension loads as a tree-sitter language."""

from __future__ import annotations

import unittest

from tree_sitter import Language, Parser, Query, QueryCursor

import _common
import tree_sitter_usda


class Load(unittest.TestCase):
    """Make sure the grammar is importable as a :class:`tree_sitter.Language`."""

    def test_language(self) -> None:
        """Wrap the exported PyCapsule into a language."""
        language = Language(tree_sitter_usda.language())
        module_id = language.id_for_node_kind("module", True)

        self.assertGreater(language.node_kind_count, 0)

        if module_id is None:
            raise RuntimeError('Grammar has no "module" node type.')

        self.assertTrue(language.node_kind_is_named(module_id))

    def test_parser(self) -> None:
        """Attach the language onto a parser."""
        parser = Parser(Language(tree_sitter_usda.language()))

        self.assertIsInstance(parser.language, Language)

    def test_version(self) -> None:
        """Make sure the grammar's ABI is readable by the installed tree-sitter."""
        language = Language(tree_sitter_usda.language())

        self.assertGreaterEqual(language.abi_version, 13)


class Highlights(unittest.TestCase):
    """Make sure the bundled highlights query is included + valid."""

    def test_query_compiles(self) -> None:
        """Compile ``queries/highlights.scm`` against the grammar."""
        language = Language(tree_sitter_usda.language())
        query = Query(language, tree_sitter_usda.HIGHLIGHTS_QUERY)

        self.assertGreater(query.pattern_count, 0)

    def test_query_captures(self) -> None:
        """Run the highlights query on a real USD layer."""
        language = Language(tree_sitter_usda.language())
        query = Query(language, tree_sitter_usda.HIGHLIGHTS_QUERY)
        captures = QueryCursor(query).captures(_common.parse())

        self.assertTrue(captures)

        comments = [_common.get_text(node) for node in captures.get("comment", [])]

        self.assertIn("# A comment inside of metadata", comments)


if __name__ == "__main__":
    unittest.main()

"""Parse a non-trivial USD layer and make sure the syntax tree is correct."""

from __future__ import annotations

import unittest

from tree_sitter import Node

import _common

_NAME_TYPES = frozenset(("identifier", "qualified_identifier"))


def _get_attribute_name(attribute: Node) -> str:
    """Get the name of ``attribute``, ignoring its type + modifiers."""
    for child in attribute.named_children:
        if child.type in _NAME_TYPES:
            return _common.get_text(child)

    raise RuntimeError(f'Attribute "{attribute}" has no name.')


class Parse(unittest.TestCase):
    """Parse :attr:`_common.SOURCE_CODE` and query the resulting tree."""

    def setUp(self) -> None:
        """Parse the USD layer once, for every test in this class."""
        self._root: Node = _common.parse()

    def test_no_errors(self) -> None:
        """Parse the whole layer without a syntax error."""
        self.assertEqual("module", self._root.type)
        self.assertFalse(self._root.has_error, msg=str(self._root))
        self.assertEqual(len(_common.SOURCE_CODE.encode("utf-8")), self._root.end_byte)

    def test_layer_metadata(self) -> None:
        """Read the ``#usda 1.0`` header's metadata."""
        metadata = _common.find_children(self._root, "metadata")

        self.assertEqual(1, len(metadata))

        assignments = {
            _common.get_text(_common.find_children(assignment, "identifier")[0]): (
                assignment.named_children[-1].type
            )
            for assignment in _common.find_all(metadata[0], "metadata_assignment")
        }

        self.assertEqual(
            {
                "defaultPrim": "string",
                "endTimeCode": "float",
                "framesPerSecond": "integer",
                "startTimeCode": "float",
                "subLayers": "list_proxy",
                "customLayerData": "dictionary",
            },
            assignments,
        )

    def test_sublayers(self) -> None:
        """Read the asset paths of the ``subLayers`` metadata."""
        proxies = _common.find_all(self._root, "list_proxy")

        self.assertEqual(1, len(proxies))

        found = [_common.get_text(path) for path in _common.find_all(proxies[0], "arc_path")]

        self.assertEqual(["@./relative/path1.usda@", "@/absolute/path3.usda@"], found)

    def test_prims(self) -> None:
        """Find every prim, including the nested ones."""
        found = [
            _common.get_text(_common.find_children(prim, "string")[0])
            for prim in _common.find_all(self._root, "prim_definition")
        ]

        self.assertEqual(
            [
                '"root"',
                '"geometry"',
                '"geometry"',
                '"Looks"',
                '"SomeMaterial"',
                '"Shader"',
                '"ParamsAPI"',
                '"root"',
            ],
            found,
        )

    def test_prim_types(self) -> None:
        """Read the ``def`` / ``class`` / ``over`` specifier of each prim."""
        found = [
            _common.get_text(_common.find_children(prim, "prim_type")[0])
            for prim in _common.find_all(self._root, "prim_definition")
        ]

        self.assertEqual(["def", "over", "over", "def", "def", "def", "class", "over"], found)

    def test_attributes(self) -> None:
        """Read the type + name of the ``"root"`` prim's attributes."""
        root = _common.find_all(self._root, "prim_definition")[0]
        block = _common.find_children(root, "block")[0]
        found = [
            (
                _common.get_text(_common.find_children(attribute, "attribute_type")[0]),
                _get_attribute_name(attribute),
            )
            for attribute in _common.find_children(block, "attribute_assignment")
        ]

        self.assertEqual(
            [
                ("double", "params:mass"),
                ("token[]", "xformOpOrder"),
                ("float3", "xformOp:translate"),
            ],
            found,
        )

    def test_attribute_modifiers(self) -> None:
        """Read the ``custom`` / ``uniform`` prefix of an attribute, if any."""
        root = _common.find_all(self._root, "prim_definition")[0]
        block = _common.find_children(root, "block")[0]
        found = [
            attribute.named_children[0].type
            for attribute in _common.find_children(block, "attribute_assignment")
        ]

        self.assertEqual(["custom", "uniform", "attribute_type"], found)

    def test_relationship(self) -> None:
        """Read a ``rel`` assignment and its target prim path."""
        relationships = _common.find_all(self._root, "relationship_assignment")

        self.assertEqual(1, len(relationships))

        children = relationships[0].named_children

        self.assertEqual(
            ["rel", "material:binding", "</root/Looks/SomeMaterial>"],
            [_common.get_text(child) for child in children],
        )

    def test_variant_set(self) -> None:
        """Find the variants of a variant set."""
        variant_sets = _common.find_all(self._root, "variant_set_definition")

        self.assertEqual(1, len(variant_sets))

        found = [
            _common.get_text(_common.find_children(variant, "string")[0])
            for variant in _common.find_all(variant_sets[0], "variant")
        ]

        self.assertEqual(['"red"', '"blue"'], found)

    def test_time_samples(self) -> None:
        """Find the time codes + values of a ``.timeSamples`` attribute."""
        # NOTE: The ``.timeSamples`` property name and its ``{}`` value block
        # are both called "timeSamples". Only the value block has children.
        #
        time_samples = [
            node for node in _common.find_all(self._root, "timeSamples") if node.named_children
        ]

        self.assertEqual(1, len(time_samples))

        found = [_common.get_text(child) for child in time_samples[0].named_children]

        self.assertEqual(
            ["1001", "(0, 0, 0)", "1002", "(1.5, 0, -2.5)"],
            found,
        )


class Incremental(unittest.TestCase):
    """Make sure the parser can re-parse an edited layer."""

    def test_edit(self) -> None:
        """Re-parse a tree after the USD text has changed."""
        parser = _common.make_parser()
        before = 'def Xform "root"\n{\n}\n'
        tree = parser.parse(before.encode("utf-8"))

        self.assertFalse(tree.root_node.has_error)

        after = before.replace('"root"', '"root_renamed"')
        index = before.index('"root"')
        tree.edit(
            start_byte=index,
            old_end_byte=index + len('"root"'),
            new_end_byte=index + len('"root_renamed"'),
            start_point=(0, index),
            old_end_point=(0, index + len('"root"')),
            new_end_point=(0, index + len('"root_renamed"')),
        )
        new_tree = parser.parse(after.encode("utf-8"), tree)
        root = new_tree.root_node

        self.assertFalse(root.has_error)

        prim = _common.find_all(root, "prim_definition")[0]

        self.assertEqual(
            '"root_renamed"', _common.get_text(_common.find_children(prim, "string")[0])
        )


if __name__ == "__main__":
    unittest.main()

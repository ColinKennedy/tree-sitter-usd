"""Build the ``tree_sitter_usda`` C extension, which wraps ``src/parser.c``."""

from os.path import isdir, join
from platform import system
from shutil import copytree

from setuptools import Extension, setup
from setuptools.command.build import build

try:
    from setuptools.command.bdist_wheel import bdist_wheel
except ImportError:
    from wheel.bdist_wheel import bdist_wheel


class Build(build):
    """A builder that includes the tree-sitter queries in the built package."""

    def run(self) -> None:
        """Copy ``queries/`` into the package and then build like normal."""
        if isdir("queries"):
            dest = join(self.build_lib, "tree_sitter_usda", "queries")
            copytree("queries", dest, dirs_exist_ok=True)

        super().run()


class BdistWheel(bdist_wheel):
    """A wheel builder that marks the C extension as stable-ABI (abi3)."""

    def get_tag(self) -> tuple[str, str, str]:
        """Replace the CPython-specific tag with an ``abi3`` tag."""
        python, abi, platform = super().get_tag()

        if python.startswith("cp"):
            python, abi = "cp310", "abi3"

        return python, abi, platform


setup(
    packages=["tree_sitter_usda"],
    package_dir={"tree_sitter_usda": "bindings/python/tree_sitter_usda"},
    package_data={"tree_sitter_usda": ["*.pyi", "py.typed", "queries/*.scm"]},
    ext_package="tree_sitter_usda",
    ext_modules=[
        Extension(
            name="_binding",
            sources=[
                "bindings/python/tree_sitter_usda/binding.c",
                "src/parser.c",
            ],
            extra_compile_args=(["-std=c11"] if system() != "Windows" else ["/std:c11", "/utf-8"]),
            define_macros=[
                ("Py_LIMITED_API", "0x030A0000"),
                ("PY_SSIZE_T_CLEAN", None),
                ("TREE_SITTER_HIDE_SYMBOLS", None),
            ],
            include_dirs=["src"],
            py_limited_api=True,
        )
    ],
    cmdclass={"build": Build, "bdist_wheel": BdistWheel},
    zip_safe=False,
)

from unittest import TestCase

import tree_sitter, tree_sitter_faust


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        tree_sitter.Language(tree_sitter_faust.language())

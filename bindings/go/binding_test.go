package tree_sitter_faust_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_faust "github.com/khiner/tree-sitter-faust/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_faust.Language())
	if language == nil {
		t.Errorf("Error loading Faust grammar")
	}
}

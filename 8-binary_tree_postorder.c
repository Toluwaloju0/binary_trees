#include "binary_trees.h"

/**
 * binary_tree_postorder - to traverse a tree in postorder format
 * @tree: the tree to be trasversed
 * @func: the function to be executed for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))

{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, (*func));
	binary_tree_postorder(tree->right, (*func));
	(*func)(tree->n);
}

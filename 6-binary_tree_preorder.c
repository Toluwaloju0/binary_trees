#include "binary_trees.h"

/**
 * binary_tree_preorder - to traverse a tree using pre-order method
 * @tree: the root of the tree
 * @func: the function to use
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))

{
	if (tree == NULL || (*func) == NULL)
	{
		return;
	}
	(*func)(tree->n);
	binary_tree_preorder(tree->left, (*func)(tree->left->n));
	binary_tree_preorder(tree->right, (*func)(tree->right->n));
}
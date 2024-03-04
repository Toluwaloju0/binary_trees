#include "binary_trees.h"

/**
 * binary_tree_height - to find the height of a binary tree
 * @tree: The tree to be affected
 * Return:  the height of the tree in size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)

{
	size_t left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (0);
	}

	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);
	if (left > right)
	{
		return (left);
	}
	else
	{
		return (right);
	}
}

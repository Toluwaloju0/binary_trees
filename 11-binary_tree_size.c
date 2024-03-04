#include "binary_trees.h"

/**
 * binary_tree_size - To get the size 0f the binary tree
 * @tree: The tree to be affected
 * Return: The size of the tree in size_t
 */

size_t binary_tree_size(const binary_tree_t *tree)

{
	size_t a = 0;

	if (tree == NULL)
	{
		return (0);
	}

	a = 1 + binary_tree_size(tree->left);
	a = 1 + binary_tree_size(tree->right);

	return (a);
}

#include "binary_trees.h"

/**
 * binary_tree_nodes - To count the nodes with children
 * @tree: The tree to be affected
 * Return: The number of nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)

{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right != NULL || tree->left != NULL)
	{

		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (0);
}

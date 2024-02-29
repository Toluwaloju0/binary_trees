#include "binary_trees.h"

/**
 *binary_tree_is_leaf - To check if a node is a leaf
 * @node: The node to be checked
 * Return: 1 if node is leaf else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	return (0);
}

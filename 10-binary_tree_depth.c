#include "binary_trees.h"

/**
 * binary_tree_depth - To get the depth of a node in a tree
 * @tree: The node to be counted
 * Return : the depth of the node in size_t
 */

size_t binary_tree_depth(const binary_tree_t *tree)

{
	size_t a = 0;

	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	a = 1 + binary_tree_depth(tree->parent);
	return (a);
}

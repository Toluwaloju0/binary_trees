#include "binary_trees.h"

/**
 * binary_tree_balance - to checkk if a tree is balanced
 * @tree: The tree to be checkked
 * Return: The balanced factor of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right != NULL)
	{
		return (-1);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_balance(tree->left) + binary_tree_balance(tree->right));
}

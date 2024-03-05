#include "binary_trees.h"

/**
 * binary_tree_is_full - To check if a binary_tre is full
 * @tree: The tree to be checked
 * Return: 1 if tree is full, else 0
 */

int binary_tree_is_full(const binary_tree_t *tree)

{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left != NULL)
	{
		return (0);
	}
	else if (tree->right != NULL && tree->left != NULL)
	{
		return (0);
	}
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);
	return (1);
}

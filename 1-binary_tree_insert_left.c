#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - To inserty a node at the left of a binary tree
 * @parent: The parent node
 * @value: the value of the node
 * Return: Pointer to the new left node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = create_node(value);
		if (parent->left == NULL)
		{
			return (NULL);
		}
		parent->left->parent = parent;
		return (parent->left);
	}
	else
	{
		temp = parent->left;
		parent->left = create_node(value);
		if (parent->right == NULL)
		{
			return (NULL);
		}
		parent->left->left = temp;
		parent->left->parent = temp->parent;
		parent->left->left->parent = parent->left;
		return (parent->left);
	}
}

#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - To inserty a node at the left of a binary tree
 * @parent: The parent node
 * @value: the value of the node
 * Return: Pointer to the new left node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)

{
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = create_node(value);
		parent->right->parent = parent->right;
		return (parent->right);
	}
	else
	{
		temp = parent->right;
		parent->right = create_node(value);
		parent->right->right = temp;
		parent->right->parent = temp->parent;
		parent->right->right->parent = parent->right;
		return (parent->right);
	}
}

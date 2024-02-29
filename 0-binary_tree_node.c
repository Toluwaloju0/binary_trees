#include "binary_trees.h"
#include <stdlib.h>
/**
 * create_node - A function to create a node
 * @value: The integer to be added
 * Return: Pointer to the new node
 */

binary_tree_t *create_node(int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = NULL;
	return (new);
}



/**
 * binary_tree_node - A function to create a biunary tree node
 * @parent: Pointer to the parent of the node to be created
 * @value: The integer to be inserted at the node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
	binary_tree_t *new;

	if (parent == NULL)
	{
		new = create_node(value);
		return (new);
	}
	if (parent->left == NULL)
	{
		parent->left = create_node(value);
		parent->left->parent = parent;
		return (parent->left);
	}
	else
	{
		parent->right = create_node(value);
		parent->right->parent = parent;
		return (parent->right);
	}
}

#include "binary_trees.h"

/**
  * binary_tree_insert_left - create new left child to given parent node.
  * @parent: pointer to parent node.
  * @value: integer data to be stored in new child.
  * Return: pointer to new child node.
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child, *new_child;

	if (parent == NULL)
		return (NULL);
	new_child = (binary_tree_t *)malloc(sizeof(*new_child));
	if (new_child == NULL)
		return (NULL);
	new_child->parent = parent;
	new_child->n = value;
	new_child->right = NULL;
	if (parent->left != NULL)
	{
		left_child = parent->left;
		new_child->left = left_child;
		parent->left = new_child;
		left_child->parent = new_child;
	}
	else
	{
		new_child->left = NULL;
		parent->left = new_child;
	}
	return (new_child);
}

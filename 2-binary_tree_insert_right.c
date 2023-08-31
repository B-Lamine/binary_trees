#include "binary_trees.h"

/**
  * binary_tree_insert_right - create new right child to given parent node.
  * @parent: pointer to parent node.
  * @value: integer data to be stored in new child.
  * Return: pointer to new child node.
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child, *new_child;

	if (parent == NULL)
		return (NULL);
	new_child = (binary_tree_t *)malloc(sizeof(*new_child));
	if (new_child == NULL)
		return (NULL);
	new_child->parent = parent;
	new_child->n = value;
	new_child->left = NULL;
	if (parent->right != NULL)
	{
		right_child = parent->right;
		new_child->right = right_child;
		parent->right = new_child;
		right_child->parent = new_child;
	}
	else
	{
		new_child->right = NULL;
		parent->right = new_child;
	}
	return (new_child);
}

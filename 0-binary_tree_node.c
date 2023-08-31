#include "binary_trees.h"

/**
  * binary_tree_node - create binary tree node.
  * @parent: pointer to parent node.
  * @value: integer value to store in new node.
  * Return: return pointer to new node.
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (parent == NULL || parent->left == NULL || parent->right == NULL)
	{
		child = (binary_tree_t *)malloc(sizeof(*child));
		if (child == NULL)
		{
			return (NULL);
		}
		child->n = value;
		child->parent = parent;
		child->left = NULL;
		child->right = NULL;
		return (child);
	}
	else
		return (NULL);
}

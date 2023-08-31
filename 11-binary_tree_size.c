#include "binary_trees.h"

/**
  * binary_tree_size - compute size of the tree, i.e. number of nodes.
  * @tree: pointer to root of the tree.
  * Return: size of the tree.
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right, size = 0;

	if (tree == NULL)
		return (0);
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	size = size_left + size_right + 1;
	return (size);
}

#include "binary_trees.h"

/**
  * _max - find biggest number between two.
  * @a: first number.
  * @b: second number.
  * Return: biggest number.
  */
size_t _max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
  * binary_tree_height - find height of given tree.
  * @tree: pointer to root of the tree.
  * Return: height of the tree.
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	height = _max(left_height, right_height) + 1;
	return (height);
}

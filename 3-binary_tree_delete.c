#include "binary_trees.h"

/**
  * binary_tree_delete - delete binary tree.
  * @tree: pointer to root of the tree.
  */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left_child, *right_child;

	if (tree == NULL)
		return;
	left_child = tree->left;
	right_child = tree->right;
	free(tree);
	binary_tree_delete(left_child);
	binary_tree_delete(right_child);
}

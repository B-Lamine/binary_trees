#include "binary_trees.h"

/**
  * binary_tree_postorder - traverse binary tree in postorder.
  * @tree: pointer to root of the tree.
  * @func: pointer to function to apply on the data in each node.
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}

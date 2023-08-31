#include "binary_trees.h"

/**
  * binary_tree_depth - find depth of given node in a tree.
  * @tree: pointer to root of the tree.
  * Return: height of the tree.
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *tmp_node;

	if (tree == NULL)
		return (0);
	tmp_node = (binary_tree_t *)tree;
	while (tmp_node->parent != NULL)
	{
		depth++;
		tmp_node = tmp_node->parent;
	}
	return (depth);
}

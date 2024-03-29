#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node argument
 * Return: 1 if leaf and 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int isLeaf = 0;

	if (node == NULL)
		return (isLeaf);

	if (node->left == NULL && node->right == NULL)
		isLeaf = 1;

	return (isLeaf);
}

#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of nodes that are leaves
 * @tree: tree to find leaves
 * Return: size_t value
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_of_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	num_of_leaves = num_of_leaves + binary_tree_leaves(tree->left);
	num_of_leaves = num_of_leaves + binary_tree_leaves(tree->right);
	return (num_of_leaves);
}

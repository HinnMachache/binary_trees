#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of a tree
 * @tree: tree to find depth
 * Return: size_t value
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	depth++;
	depth = depth + binary_tree_depth(tree->parent);
	return (depth);
}

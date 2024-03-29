#include "binary_trees.h"

/**
 * binary_tree_postorder - prints tree in post order
 * @tree: tree to print
 * @func: func pointer
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (binary_tree_is_leaf(tree) == 0)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
		return;
	}
	else
	{
		func(tree->n);
		return;
	}
}

#include "binary_trees.h"

/**
 * tree_height - gets the height of a tree
 * @tree: tree argument
 * Return: size_t value
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL)
		return (0);

	left_side = tree_height(tree->left);
	right_side = tree_height(tree->right);
	if (left_side >= right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}

/**
 * binary_tree_balance - calculate the balance of a tree
 * @tree: tree argument
 * Return: int value
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	size_t left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);

	left_side = tree_height(tree->left);
	right_side = tree_height(tree->right);

	balance = left_side - right_side;
	return (balance);
}

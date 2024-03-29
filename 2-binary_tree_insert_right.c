#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right of a tree
 * @parent: parent of inserted node
 * @value: value of inserted node
 * Return: pointer to inserted node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL || parent == NULL)
	{
		free(right_node);
		return (NULL);
	}

	right_node->n = value;
	right_node->left = NULL;
	right_node->parent = parent;
	right_node->right = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = right_node;
		right_node->right = parent->right;
	}
	parent->right = right_node;
	return (right_node);
}

#include "binary_trees.h"

/**
 * binary_tree_node - creates a node for a binary tree
 * @parent: parent of node created
 * @value: value of node created
 * Return: pointer to node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
	{
		free(node);
		return (NULL);
	}

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

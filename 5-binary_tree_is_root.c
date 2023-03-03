#include "binary_trees.h"

/**
 * binary_tree_is_root - function that check if a given node is a root
 * @node: node to be checked
 * Return: return 1 if node is a root 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}

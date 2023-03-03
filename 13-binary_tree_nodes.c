#include "binary_trees.h"

/**
 * binary_tree_nodes - functio that counts nodes
 * @tree:pointer to the root node
 * Return:always 0 (success)
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;


	if (tree == NULL)
		return (0);

	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);

	return (1 + l + r);
}
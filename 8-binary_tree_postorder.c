#include "binary_trees.h"

/**
 * binary_tree_postorder - function that uses post-order traversal
 * @tree: a pinter to the root node
 * @func: pointer to a function to call each node
 * Return: always 0 (success)
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

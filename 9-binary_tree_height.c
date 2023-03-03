#include "binary_trees.h"

/**
 * binary_tree_height - function that calculate the height of a tree
 * @tree: a pointer to the root node
 * Return: always 0 (success)
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t LFBT, RHBT;

	if (tree == NULL)
		return (0);

	LFBT = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
	RHBT = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;

	if (LFBT >= RHBT)
		return (LTBT);
	else
		return (RHBT);

}

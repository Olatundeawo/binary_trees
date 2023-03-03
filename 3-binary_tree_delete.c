#include "binary_trees.h"

/**
 * binary_tree_delete - a function that delete the whole tree
 * @tree: a pointer to the nod eof the tree to be delete
 * Return: Always 0 success
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}

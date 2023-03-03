#include "binary_trees.h"

/**
 * binary_tree_measure -  mesures the height of the node
 * @tree: a pointer to the node
 * Return: 0
 */


size_t binary_tree_measure(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (-1);

	lh = (tree->left) ? 1 + binary_tree_measure(tree->left) : 0;
	rh = (tree->right) ? 1 + binary_tree_measure(tree->right) : 0;

	if (lh >= rh)
		return (lh);
	else
		return (rh);
}



/**
 * binary_tree_balnce - mesures the balance factor of a binary tree
 * @tree: a pointer to the root node
 * Return: always 0 (success)
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	int hl, hr;


	if (!tree)
		return (0);

	hl = binary_tree_measure(tree->left);
	hr = binary_tree_measure(tree->right);

	return (hl - hr);
}

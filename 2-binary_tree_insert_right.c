#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert into the right side of the tree
 * @parent: pointer to the node to insert the right child
 * @value: value of the right side
 * Return: NULL on failure or pointer to the creted node
 */



binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		(parent->right)->parent = new_node;
		new_node->right = parent->right;
	}
	parent->right = new_node;
	return (new_node);
}

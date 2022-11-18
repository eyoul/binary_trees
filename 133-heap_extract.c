#include "binary_trees.h"

/**
 * count_heap_nodes - Counts the number of nodes inside a tree
 * @root: Pointer to tree's root node
 *
 * Return: Number of tree nodes
 */
int count_heap_nodes(binary_tree_t *root)
{
	if (!root)
		return (0);

	return (1 + count_heap_nodes(root->left) +
		    count_heap_nodes(root->right));
}

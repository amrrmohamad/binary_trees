#include "binary_trees.h"

/**
 * binary_tree_depth - Measures .............
 * @tree: A pointer to the node .
 *
 * Return: If tree is NULL,  0, else return 1
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

#include "binary_trees.h"

/**
 * binary_tree_height - Measures .........
 * @tree: A pointer .....................
 *
 * Return: If tree is NULL, return 0, else return 1
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t m = 0, p = 0;

		m = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		p = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((m > p) ? m : p);
	}
	return (0);
}

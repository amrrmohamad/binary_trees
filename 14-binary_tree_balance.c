#include "binary_trees.h"

/**
 * binary_tree_balance - Measures ......
 * @tree: A pointer .......
 *
 * Return: If  NULL, return 0, else return 1.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);

}

#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts ..
 * @tree: A pointer to the root .
 *
 * Return: If  NULL,  0, else return node 1.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nds = 0;

	if (tree)
	{
		nds += (tree->left || tree->right) ? 1 : 0;
		nds += binary_tree_nodes(tree->left);
		nds += binary_tree_nodes(tree->right);
	}
	return (nds);
}

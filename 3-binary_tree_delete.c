#include "binary_trees.h"

/**
 * binary_tree_delete - ....
 * @tree: A pointer .........
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}

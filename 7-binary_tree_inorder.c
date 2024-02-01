#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree .
 * @tree: A pointer to ...........
 * @func: An another pointer t............
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ( func && tree )
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

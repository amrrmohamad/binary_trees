#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds .
 * @node: A pointer .
 *
 * Return: If node is NULL or there is no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent->left == node)
		return (node->parent->right);
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (node->parent->left);
}

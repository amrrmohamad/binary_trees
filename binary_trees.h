#ifndef TREE_BINARY_H_AMR
#define TREE_BINARY_H_AMR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* structures and linked lists and data */

/**
 * struct binary_tree_s - first node
 * @parent: Pointer is going to node
 * @n:  a variable n .....
 * @right: ....................
 * @left: Pointer going to next child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
	struct binary_tree_s *parent;
};
typedef struct binary_tree_s binary_tree_t;


/**
 * struct level_order_queue_s - It just  a level order.
 * @next: The next node to traverse to in the binary tree.
 * @node: A node of a binary tree.
 */
typedef struct level_order_queue_s
{
	struct level_order_queue_s *next;
	binary_tree_t *node;
} level_order_queue_t;

/* the function prototypes of all task */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

/*16-binary_trees_perfect.c*/
unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
	size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);


binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);



#endif /* TREE_BINARY_H_AMR */

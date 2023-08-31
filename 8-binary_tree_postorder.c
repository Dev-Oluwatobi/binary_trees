#include "binary_trees.h"

/**
 * binary_tree_postorder - Func that goes through a binary tree using post-order.
 *@tree: parameter to the root node of the tree to traverse.
 *@func: Parameter to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

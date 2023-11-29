#include "binary_trees.h"

/**
 * binary_tree_nodes - tally the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to parent node of the tree to tally the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node tally.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}

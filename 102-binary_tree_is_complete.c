#include "binary_trees.h"

/**
 * count_nodes - Counts ths inside a tree
 * @foot:  node
 *
 * Return: Number odes
 */

int count_nodes(binary_tree_t *foot)
{
	if (!foot)
		return (0);

	return (1 + count_nodes(foot->left) + count_nodes(foot->right));
}


/**
 * is_complete - Checks if a tree is complete
 * @foot: Pointer to tree's foot
 * @index: Index of the node been evaluated
 * @n: number of trees nod
 *
 * Return: 1 if the tree is a heap, 0 otherwise
 */

int is_complete(binary_tree_t *foot, int index, int n)
{
	if (!foot)
		return (0);

	if (index >= n)
		return (0);
	if (!foot->left && !foot->right)
		return (1);
	if (foot->right && !foot->left)
		return (0);
	if (foot->left && !foot->right)
		return (is_complete(foot->left, index * 2 + 1, n));

	return (is_complete(foot->left, index * 2 + 1, n) &&
		is_complete(foot->right, index * 2 + 2, n));
}

/**
 * binary_tree_is_complete - check for bt complete
 * @tree: Pointer to foot
 *
 * Return: 1 if
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int nod;
	binary_tree_t *foot;

	if (!tree)
		return (0);

	foot = (binary_tree_t *)tree;
	nod = count_nodes(foot);

	return (is_complete(foot, 0, nod));
}

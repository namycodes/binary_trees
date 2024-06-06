#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *foot;
	size_t depth;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 402);
	binary_tree_insert_right(foot->left, 54);
	binary_tree_insert_right(foot, 128);
	binary_tree_print(foot);

	depth = binary_tree_depth(foot);
	printf("Depth of %d: %lu\n", foot->n, depth);
	depth = binary_tree_depth(foot->right);
	printf("Depth of %d: %lu\n", foot->right->n, depth);
	depth = binary_tree_depth(foot->left->right);
	printf("Depth of %d: %lu\n", foot->left->right->n, depth);
	return (0);
}

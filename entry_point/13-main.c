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
	size_t nodes;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 402);
	binary_tree_insert_right(foot->left, 54);
	binary_tree_insert_right(foot, 128);
	binary_tree_print(foot);

	nodes = binary_tree_nodes(foot);
	printf("Nodes in %d: %lu\n", foot->n, nodes);
	nodes = binary_tree_nodes(foot->right);
	printf("Nodes in %d: %lu\n", foot->right->n, nodes);
	nodes = binary_tree_nodes(foot->left->right);
	printf("Nodes in %d: %lu\n", foot->left->right->n, nodes);
	return (0);
}

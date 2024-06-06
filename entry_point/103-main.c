#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
	binary_tree_t *foot;

	foot = binary_tree_node(NULL, 98);
	foot->right = binary_tree_node(foot, 128);
	foot->right->right = binary_tree_node(foot->right, 402);
	binary_tree_print(foot);
	printf("Rotate-left %d\n", foot->n);
	foot = binary_tree_rotate_left(foot);
	binary_tree_print(foot);
	printf("\n");

	foot->right->right = binary_tree_node(foot->right, 450);
	foot->right->left = binary_tree_node(foot->right, 420);
	binary_tree_print(foot);
	printf("Rotate-left %d\n", foot->n);
	foot = binary_tree_rotate_left(foot);
	binary_tree_print(foot);
	return (0);
}

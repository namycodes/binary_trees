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
	foot->left = binary_tree_node(foot, 64);
	foot->left->left = binary_tree_node(foot->left, 32);
	binary_tree_print(foot);
	printf("Rotate-right %d\n", foot->n);
	foot = binary_tree_rotate_right(foot);
	binary_tree_print(foot);
	printf("\n");

	foot->left->left = binary_tree_node(foot->left, 20);
	foot->left->right = binary_tree_node(foot->left, 56);
	binary_tree_print(foot);
	printf("Rotate-right %d\n", foot->n);
	foot = binary_tree_rotate_right(foot);
	binary_tree_print(foot);
	return (0);
}

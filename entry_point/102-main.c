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
	int complete;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 128);
	foot->left->right = binary_tree_node(foot->left, 54);
	foot->right->right = binary_tree_node(foot, 402);
	foot->left->left = binary_tree_node(foot->left, 10);

	binary_tree_print(foot);
	complete = binary_tree_is_complete(foot);
	printf("Is %d complete: %d\n", foot->n, complete);
	complete = binary_tree_is_complete(foot->left);
	printf("Is %d complete: %d\n", foot->left->n, complete);

	foot->right->left = binary_tree_node(foot->right, 112);
	binary_tree_print(foot);
	complete = binary_tree_is_complete(foot);
	printf("Is %d complete: %d\n", foot->n, complete);

	foot->left->left->left = binary_tree_node(foot->left->left, 8);
	binary_tree_print(foot);
	complete = binary_tree_is_complete(foot);
	printf("Is %d complete: %d\n", foot->n, complete);

	foot->left->right->left = binary_tree_node(foot->left->right, 23);
	binary_tree_print(foot);
	complete = binary_tree_is_complete(foot);
	printf("Is %d complete: %d\n", foot->n, complete);

	binary_tree_delete(foot);
	return (0);
}

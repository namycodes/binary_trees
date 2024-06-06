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
	int full;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 402);
	binary_tree_insert_right(foot->left, 54);
	binary_tree_insert_right(foot, 128);
	foot->left->left = binary_tree_node(foot->left, 10);
	binary_tree_print(foot);

	full = binary_tree_is_full(foot);
	printf("Is %d full: %d\n", foot->n, full);
	full = binary_tree_is_full(foot->left);
	printf("Is %d full: %d\n", foot->left->n, full);
	full = binary_tree_is_full(foot->right);
	printf("Is %d full: %d\n", foot->right->n, full);
	return (0);
}

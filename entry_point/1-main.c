#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *foot;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 402);
	binary_tree_print(foot);
	printf("\n");
	binary_tree_insert_left(foot->right, 128);
	binary_tree_insert_left(foot, 54);
	binary_tree_print(foot);
	return (0);
}

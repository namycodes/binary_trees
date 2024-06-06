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
	size_t height;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 402);
	binary_tree_insert_right(foot->left, 54);
	binary_tree_insert_right(foot, 128);
	binary_tree_print(foot);

	height = binary_tree_height(foot);
	printf("Height from %d: %lu\n", foot->n, height);
	height = binary_tree_height(foot->right);
	printf("Height from %d: %lu\n", foot->right->n, height);
	height = binary_tree_height(foot->left->right);
	printf("Height from %d: %lu\n", foot->left->right->n, height);
	return (0);
}

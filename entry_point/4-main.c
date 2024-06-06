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
	int ret;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 402);
	binary_tree_insert_right(foot->left, 54);
	binary_tree_insert_right(foot, 128);
	binary_tree_print(foot);

	ret = binary_tree_is_leaf(foot);
	printf("Is %d a leaf: %d\n", foot->n, ret);
	ret = binary_tree_is_leaf(foot->right);
	printf("Is %d a leaf: %d\n", foot->right->n, ret);
	ret = binary_tree_is_leaf(foot->right->right);
	printf("Is %d a leaf: %d\n", foot->right->right->n, ret);
	return (0);
}

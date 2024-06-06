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
	int perfect;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 402);
	binary_tree_insert_right(foot->left, 54);
	binary_tree_insert_right(foot, 128);
	foot->left->left = binary_tree_node(foot->left, 10);
	foot->right->left = binary_tree_node(foot->right, 10);

	binary_tree_print(foot);
	perfect = binary_tree_is_perfect(foot);
	printf("Perfect: %d\n\n", perfect);

	foot->right->right->left = binary_tree_node(foot->right->right, 10);
	binary_tree_print(foot);
	perfect = binary_tree_is_perfect(foot);
	printf("Perfect: %d\n\n", perfect);

	foot->right->right->right = binary_tree_node(foot->right->right, 10);
	binary_tree_print(foot);
	perfect = binary_tree_is_perfect(foot);
	printf("Perfect: %d\n", perfect);
	return (0);
}

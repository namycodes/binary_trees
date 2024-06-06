#include <stdlib.h>
#include "../binary_trees.h"

/**
 * main - Entry point here mate
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *foot;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->left->left = binary_tree_node(foot->left, 6);
	foot->left->right = binary_tree_node(foot->left, 16);
	foot->right = binary_tree_node(foot, 402);
	foot->right->left = binary_tree_node(foot->right, 256);
	foot->right->right = binary_tree_node(foot->right, 512);
	binary_tree_print(foot);
	return (0);
}

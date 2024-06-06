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
	binary_tree_t *uncle;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 128);
	foot->left->right = binary_tree_node(foot->left, 54);
	foot->right->right = binary_tree_node(foot->right, 402);
	foot->left->left = binary_tree_node(foot->left, 10);
	foot->right->left = binary_tree_node(foot->right, 110);
	foot->right->right->left = binary_tree_node(foot->right->right, 200);
	foot->right->right->right = binary_tree_node(foot->right->right, 512);

	binary_tree_print(foot);
	uncle = binary_tree_uncle(foot->right->left);
	printf("Uncle of %d: %d\n", foot->right->left->n, uncle->n);
	uncle = binary_tree_uncle(foot->left->right);
	printf("Uncle of %d: %d\n", foot->left->right->n, uncle->n);
	uncle = binary_tree_uncle(foot->left);
	printf("Uncle of %d: %p\n", foot->left->n, (void *)uncle);
	return (0);
}

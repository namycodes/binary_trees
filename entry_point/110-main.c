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
	int bst;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 128);
	foot->left->right = binary_tree_node(foot->left, 54);
	foot->right->right = binary_tree_node(foot, 402);
	foot->left->left = binary_tree_node(foot->left, 10);

	binary_tree_print(foot);
	bst = binary_tree_is_bst(foot);
	printf("Is %d bst: %d\n", foot->n, bst);
	bst = binary_tree_is_bst(foot->left);
	printf("Is %d bst: %d\n", foot->left->n, bst);

	foot->right->left = binary_tree_node(foot->right, 97);
	binary_tree_print(foot);
	bst = binary_tree_is_bst(foot);
	printf("Is %d bst: %d\n", foot->n, bst);
	return (0);
}

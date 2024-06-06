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
	binary_tree_t *sibling;

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
	sibling = binary_tree_sibling(foot->left);
	printf("Sibling of %d: %d\n", foot->left->n, sibling->n);
	sibling = binary_tree_sibling(foot->right->left);
	printf("Sibling of %d: %d\n", foot->right->left->n, sibling->n);
	sibling = binary_tree_sibling(foot->left->right);
	printf("Sibling of %d: %d\n", foot->left->right->n, sibling->n);
	sibling = binary_tree_sibling(foot);
	printf("Sibling of %d: %p\n", foot->n, (void *)sibling);
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * basic_tree - Build a basic binary tree
 *
 * Return: A pointer to the created tree
 */
binary_tree_t *basic_tree(void)
{
	binary_tree_t *foot;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 128);
	foot->left->right = binary_tree_node(foot->left, 54);
	foot->right->right = binary_tree_node(foot, 402);
	foot->left->left = binary_tree_node(foot->left, 10);
	return (foot);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *foot;
	int avl;

	foot = basic_tree();

	binary_tree_print(foot);
	avl = binary_tree_is_avl(foot);
	printf("Is %d avl: %d\n", foot->n, avl);
	avl = binary_tree_is_avl(foot->left);
	printf("Is %d avl: %d\n", foot->left->n, avl);

	foot->right->left = binary_tree_node(foot->right, 97);
	binary_tree_print(foot);
	avl = binary_tree_is_avl(foot);
	printf("Is %d avl: %d\n", foot->n, avl);

	foot = basic_tree();
	foot->right->right->right = binary_tree_node(foot->right->right, 430);
	binary_tree_print(foot);
	avl = binary_tree_is_avl(foot);
	printf("Is %d avl: %d\n", foot->n, avl);

	foot->right->right->right->left = binary_tree_node
	(foot->right->right->right, 420);
	binary_tree_print(foot);
	avl = binary_tree_is_avl(foot);
	printf("Is %d avl: %d\n", foot->n, avl);
	return (0);
}

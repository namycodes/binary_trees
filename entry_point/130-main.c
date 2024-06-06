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
	foot->left = binary_tree_node(foot, 90);
	foot->right = binary_tree_node(foot, 85);
	foot->left->right = binary_tree_node(foot->left, 80);
	foot->left->left = binary_tree_node(foot->left, 79);
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
	int heap;

	foot = basic_tree();

	binary_tree_print(foot);
	heap = binary_tree_is_heap(foot);
	printf("Is %d heap: %d\n", foot->n, heap);
	heap = binary_tree_is_heap(foot->left);
	printf("Is %d heap: %d\n", foot->left->n, heap);

	foot->right->left = binary_tree_node(foot->right, 97);
	binary_tree_print(foot);
	heap = binary_tree_is_heap(foot);
	printf("Is %d heap: %d\n", foot->n, heap);

	foot = basic_tree();
	foot->right->right = binary_tree_node(foot->right, 79);
	binary_tree_print(foot);
	heap = binary_tree_is_heap(foot);
	printf("Is %d heap: %d\n", foot->n, heap);
	return (0);
}

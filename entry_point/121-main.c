#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
	avl_t *foot;
	avl_t *node;

	foot = NULL;
	node = avl_insert(&foot, 98);
	printf("Inserted: %d\n", node->n);
	binary_tree_print(foot);
	node = avl_insert(&foot, 402);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(foot);
	node = avl_insert(&foot, 12);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(foot);
	node = avl_insert(&foot, 46);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(foot);
	node = avl_insert(&foot, 128);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(foot);
	node = avl_insert(&foot, 256);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(foot);
	node = avl_insert(&foot, 512);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(foot);
	node = avl_insert(&foot, 50);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(foot);
	return (0);
}

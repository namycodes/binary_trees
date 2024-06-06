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
	bst_t *foot;
	bst_t *node;

	foot = NULL;
	node = bst_insert(&foot, 98);
	printf("Inserted: %d\n", node->n);
	node = bst_insert(&foot, 402);
	printf("Inserted: %d\n", node->n);
	node = bst_insert(&foot, 12);
	printf("Inserted: %d\n", node->n);
	node = bst_insert(&foot, 46);
	printf("Inserted: %d\n", node->n);
	node = bst_insert(&foot, 128);
	printf("Inserted: %d\n", node->n);
	node = bst_insert(&foot, 256);
	printf("Inserted: %d\n", node->n);
	node = bst_insert(&foot, 512);
	printf("Inserted: %d\n", node->n);
	node = bst_insert(&foot, 1);
	printf("Inserted: %d\n", node->n);
	node = bst_insert(&foot, 128);
	printf("Node should be nil -> %p\n", (void *)node);
	binary_tree_print(foot);
	return (0);
}

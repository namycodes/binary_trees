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
	int balance;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 402);
	binary_tree_insert_right(foot->left, 54);
	binary_tree_insert_right(foot, 128);
	binary_tree_insert_left(foot, 45);
	binary_tree_insert_right(foot->left, 50);
	binary_tree_insert_left(foot->left->left, 10);
	binary_tree_insert_left(foot->left->left->left, 8);
	binary_tree_print(foot);

	balance = binary_tree_balance(foot);
	printf("Balance of %d: %+d\n", foot->n, balance);
	balance = binary_tree_balance(foot->right);
	printf("Balance of %d: %+d\n", foot->right->n, balance);
	balance = binary_tree_balance(foot->left->left->right);
	printf("Balance of %d: %+d\n", foot->left->left->right->n, balance);
	return (0);
}

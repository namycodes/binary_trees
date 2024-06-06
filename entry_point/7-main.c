#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
	printf("%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *foot;

	foot = binary_tree_node(NULL, 98);
	foot->left = binary_tree_node(foot, 12);
	foot->right = binary_tree_node(foot, 402);
	foot->left->left = binary_tree_node(foot->left, 6);
	foot->left->right = binary_tree_node(foot->left, 56);
	foot->right->left = binary_tree_node(foot->right, 256);
	foot->right->right = binary_tree_node(foot->right, 512);

	binary_tree_print(foot);
	binary_tree_inorder(foot, &print_num);
	return (0);
}

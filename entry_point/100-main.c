#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * launch_test - Test ancestor function and print informations
 *
 * @n1: First node
 * @n2: Second node
 */
void launch_test(binary_tree_t *n1, binary_tree_t *n2)
{
	binary_tree_t *ancestor;

	ancestor = binary_trees_ancestor(n1, n2);
	printf("Ancestor of [%d] & [%d]: ", n1->n, n2->n);
	if (!ancestor)
		printf("(nil)\n");
	else
		printf("%d\n", ancestor->n);
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
	foot->left->right = binary_tree_node(foot->left, 54);
	foot->right->right = binary_tree_node(foot->right, 128);
	foot->left->left = binary_tree_node(foot->left, 10);
	foot->right->left = binary_tree_node(foot->right, 45);
	foot->right->right->left = binary_tree_node(foot->right->right, 92);
	foot->right->right->right = binary_tree_node(foot->right->right, 65);
	binary_tree_print(foot);

	launch_test(foot->left, foot->right);
	launch_test(foot->right->left, foot->right->right->right);
	launch_test(foot->right->right, foot->right->right->right);
	return (0);
}

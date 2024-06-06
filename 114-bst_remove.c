#include "binary_trees.h"
/**
 * min_finder - Finds the minimum foot
 * @foot: pointer to the tree
 * Return: the min number
 */

bst_t *min_finder(bst_t *foot)
{
	while (foot->left != NULL)
		foot = foot->left;
	return (foot);
}

/**
 * bst_remove - removes a node from a Binary Search Tree
 *
 * @foot: pointer to the foot node of the tree where you will remove a node
 * @value: value to remove in the tree
 * Return: pointer to the new foot node of the tree
 * after removing the desired value
 */

bst_t *bst_remove(bst_t *foot, int value)
{
	bst_t *temp, *parent;

	if (foot == NULL)
		return (NULL);
	else if (value < foot->n)
		foot->left = bst_remove(foot->left, value);
	else if (value > foot->n)
		foot->right = bst_remove(foot->right, value);
	else
	{
		if (foot->left == NULL && foot->right == NULL)
		{
			free(foot);
			foot = NULL;
		}
		else if (foot->left == NULL)
		{
			temp = foot;
			parent = foot->parent;
			foot = foot->right;
			foot->parent = parent;
			free(temp);
		}
		else if (foot->right == NULL)
		{
			temp = foot;
			parent = foot->parent;
			foot = foot->left;
			foot->parent = parent;
			free(temp);
		}
		else
		{
			temp = min_finder(foot->right);
			foot->n = temp->n;
			foot->right = bst_remove(foot->right, temp->n);
		}
	}
	return (foot);
}

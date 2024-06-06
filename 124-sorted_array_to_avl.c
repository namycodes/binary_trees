#include "binary_trees.h"

/**
 * sorted_array_to_avl_revursive - recursive array to avl
 *
 * @array: pointer to array
 * @first_index: sub array initial index
 * @final_index: sub array end index
 * Return: pointer to foot
 */
avl_t *sorted_array_to_avl_revursive(int *array, int first_index,
int final_index)
{
	avl_t *foot;
	int half;

	if (final_index < first_index)
		return (NULL);

	half = (final_index + first_index) / 2;
	/* creation of binary tree with foot = half */
	foot = binary_tree_node(NULL, array[half]);
	if (!foot)
		return (NULL);
	/* sort each branch */
	foot->left = sorted_array_to_avl_revursive(array, first_index, half - 1);
	foot->right = sorted_array_to_avl_revursive(array, half + 1, final_index);
	if (foot->left)
		foot->left->parent = foot;
	if (foot->right)
		foot->right->parent = foot;
	return (foot);
}

/**
 * sorted_array_to_avl - builds an AVL tree from an array
 *
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 * Return: pointer to the foot node of the created AVL tree
 * or NULL on failure
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (!array || size < 1)
		return (NULL);
	return (sorted_array_to_avl_revursive(array, 0, size - 1));
}

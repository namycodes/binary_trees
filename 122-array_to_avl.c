#include "binary_trees.h"

/**
 * array_to_avl - builds an AVL tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 * Return: Pointer to foot
 */
avl_t *array_to_avl(int *array, size_t size)
{
	size_t i;
	avl_t *foot = NULL;

	if (!array || size == 0)
		return (NULL);

	foot = avl_insert(&foot, array[0]);
	for (i = 1; i < size; i++)
		avl_insert(&foot, array[i]);

	return (foot);
}

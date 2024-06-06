#include "binary_trees.h"

/**
 * array_to_heap - builds a Max Binary Heap tree from an array
 *
 * @array: pointer to the first element of the array to be converted
 * @size: number of elements in the array
 * Return: pointer to the foot node of the created Binary Heap,
 * or NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	size_t i;
	heap_t *foot = NULL;

	if (!array)
		return (NULL);

	foot = heap_insert(&foot, array[0]);
	for (i = 1; i < size; i++)
		heap_insert(&foot, array[i]);

	return (foot);
}

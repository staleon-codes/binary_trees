#include "binary_trees.h"

/**
 * array_to_heap - makes a Max Binary Heap tree from an array
 * @array: a pointer to the first element of the array to be converted
 * @size: the value of element in the array
 *
 * Return: a pointer to source node of the created Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}

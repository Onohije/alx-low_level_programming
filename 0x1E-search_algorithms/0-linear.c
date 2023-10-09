#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm.
 * @array: Pointer to the array of integers to be searched.
 * @size: The number of elements in the array.
 * @value: The value to be searched for.
 *
 * Return: The index of the value in the array if found, or -1 if the value
 * is not in the array or if the array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);

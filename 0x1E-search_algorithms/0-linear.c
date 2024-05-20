#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: A pointer to the array to search
 * @size: The size of array.
 * @value: The value to search
 * Return: The index of value in array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

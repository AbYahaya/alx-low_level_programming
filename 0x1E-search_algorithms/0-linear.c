#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: A pointer to input array
 * @size: The size of array.
 * @value: The value to search
 * Return: The index of the value
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

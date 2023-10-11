#include <stdlib.h>

/**
 * array_iterator -  a function that executes a function as a param
 * @array: A pointer to array
 * @size: Size of the array
 * @action: function to iterate throw array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
i	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

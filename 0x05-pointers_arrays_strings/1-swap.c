#include "main.h"

/**
 * swap_int - a ffnc that swapsthe valuesof 2 ints.
 * @a: an int pointer
 * @b: an int pointer
 * Return - Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

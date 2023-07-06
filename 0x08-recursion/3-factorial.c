#include "main.h"

/**
 * factorial - a funtion to return the factorial of a number
 * @h: the integer to be factorialized
 * Return: returns -1 in case of error
 */
int factorial(int h)
{
	if (h < 0)
		return (-1);
	if (h <= 1)
		return (1);
	return (h * factorial(h - 1));
}

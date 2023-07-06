#include "main.h"

/**
 * _strlen_recursion - a funtion thath rturns the lenght of a string
 * @h: an input string
 * Return - returns th len of the string
 */
int _strlen_recursion(char *h)
{
	if (*h)
	{
		return (1 + _strlen_recursion(h + 1));
	return (0);
	}
}

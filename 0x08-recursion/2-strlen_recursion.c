#include "main.h"

/**
 * _strlen_recursion - a function
 * @s: An input string to printing
 * Return: The length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

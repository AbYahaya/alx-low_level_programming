#include "main.h"

/**
 * _memset - a function
 * @s: an input
 * @b: another 
 * @n: input int
 * Return: a char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}

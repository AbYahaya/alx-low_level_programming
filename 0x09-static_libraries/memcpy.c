#include "main.h"

/**
 * _memcpy - a function
 * @dest: an iput
 * @src: another
 * @n: input int
 * Return: a char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}

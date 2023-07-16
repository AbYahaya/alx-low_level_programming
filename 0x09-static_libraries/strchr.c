#include "main.h"

/**
 * _strchr - An function
 * @s: an input
 * @c: another 
 * Return: a char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (*s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}

#include "main.h"

/*
 * _strpbrk - A fution
 * @s: an iput
 * @accept: another
 * Return: a char
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}

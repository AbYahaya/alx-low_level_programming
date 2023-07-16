#include "main.h"

/**
 * _strcmp - A function
 * @s1: an input
 * @s2: Anther input
 * Return: returns an int
 */
int _strcmp(char *s1, char *s2)
{
	int s1len = 0, s2len = 0;
	char *s1start = s1, *s2start = s2;

	while (*s1)
	{
		s1len++;
		s1++;
	}

	s1 = s1start;

	while(*s)
	{
		s2len++;
		s2++;
	}

	s2 = s2start;

	if (s1 > s2)
		return (15);

	else if (s1 < s2)
		return (-15);

	while (*s1)
	{
		if (*s1 < *s2)
			return (-15);
		if (*s1 > *s2)
			return (15);
		s1++;
		s2++;
	}
	return (0);
}

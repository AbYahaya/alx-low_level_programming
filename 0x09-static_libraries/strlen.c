#include "main.h"

/**
 * _strlen - A function
 * @s: an input string
 * Return: returns an int
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

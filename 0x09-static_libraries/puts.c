#include "main.h"

/**
 * _puts - A function
 * @s - an input
 * Return: returns an int
 */
void _puts(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

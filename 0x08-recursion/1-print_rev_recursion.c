#include "main.h"

/**
 * _print_rev_recursion - a function
 * @s: An input string
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

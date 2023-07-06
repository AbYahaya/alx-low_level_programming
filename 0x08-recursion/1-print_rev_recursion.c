#include "main.h"

/**
 * _print_rev_recursion - A function that reverses an input string
 * @h: An input string
 * Return -Retunrs nothing
 */
void _print_rev_recursion(char *h)
{
	if (*h)
	{
		_print_rev_recursion(h + 1);
		_putchar(*h);
	}
}

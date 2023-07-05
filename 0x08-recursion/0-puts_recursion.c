#include "main.h"
/**
 * _puts_recursion - A funtion that prints the letters
 * of string in different lines
 * @h: An input String
 * Return - Nothing
*/
void _puts_recursion(char *h)
{
	if (*h)
	{
	_putchar(*h);
	_puts_recursion(h + 1);
	}
	else
		_putchar('\n');
}

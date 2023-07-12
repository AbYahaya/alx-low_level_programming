#include "main.h"

/**
 * _putchar - A function that prints to stdout
 * @c: an input string
 * Return: Returns an int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

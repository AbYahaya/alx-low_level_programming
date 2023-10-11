#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * @name: pointer to to char name
 * @f: function to print name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

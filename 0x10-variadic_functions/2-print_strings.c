#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings separated
 * @separator: a separator
 * @n: number of input to be evaluated
 * @...: remaining arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	for (; i < n; i++)
	{
		if (va_arg(ap, char*) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char*));

		if (separator == NULL)
			continue;
		if (i < n-1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

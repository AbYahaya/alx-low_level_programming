#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints its args seperated
 * @separator: symbol that seperates nums
 * @n: number of numbers
 * @...: other args
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int m = n - 1;
	va_list ap;

	va_start(ap, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator == NULL)
			continue;
		if (i < m)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

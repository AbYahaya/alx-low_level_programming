#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function to return sum of its args
 * @n: the number of args
 * @...: other arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i = 0;

	if (n == 0)
                return (0);

	va_start(ap, n);

	sum = 0;
	for (; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

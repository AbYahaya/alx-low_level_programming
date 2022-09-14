#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check properly
 * @n: input int
 * Description: function that prints Natural numbers
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf("\n");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(",");
		}
		printf("\n");
	}
}

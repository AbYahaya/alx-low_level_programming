#include "main.h"
#include <stdio.h>

/**
 * main - returns the number of passed argument
 * @argc: a counter
 * @argv: a vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}

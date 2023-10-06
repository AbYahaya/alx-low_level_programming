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
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}

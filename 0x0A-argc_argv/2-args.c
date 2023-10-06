#include "main.h"
#include <stdio.h>

/**
 * main: a func that prints its argument
 * @argc: argument counter
 * @argv: arg vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main: a func that prints its argument
 * @argc: argument counter
 * @argv: arg vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}

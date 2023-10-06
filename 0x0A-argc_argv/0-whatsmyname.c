#include "main.h"
#include <stdio.h>

/**
 * main - A function to print its name
 * @argc: argument counter
 * @argv: argument vetor
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}

#include "main.h"

/**
 * _strcpy - A function
 * @dest: an input
 * @src: another input
 * Return: returns a char
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}

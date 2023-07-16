#include "main.h"

/**
 * _strcat - a function
 * @dest: an input 
 * @src: another input
 * Return: returns a char
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}

#include "main.h"

/**
 * _islower - a function 
 * @c: an input string
 * Return: returns an int
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}

#include "main.h"

/**
 * _pow_recursion - a functon that returns the value of g raised to pw of h
 * @g: an input integer  num
 * @h: an input interger num
 * Return:returns the value of g raised the power of h
 */
int _pow_recursion(int g, int h)
{
	if (h < 0)
		return (-1);
	else if (h == 0)
		return (1);
	else if (h == 1)
		return (g);
	else
		return (g *= _pow_recursion(g, h - 1));
}

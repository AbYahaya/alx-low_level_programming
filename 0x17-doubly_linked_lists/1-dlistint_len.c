#include "lists.h"

/**
 * dlistint_len - A funcion that returns number of elements
 * @h: head pointer of the function
 * Return: num of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}

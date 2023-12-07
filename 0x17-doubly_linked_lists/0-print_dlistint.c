#include "lists.h"

/**
 * print_dlistint - A function to that prints content of DL list
 * @h: head node of the list
 * Return: returns number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}

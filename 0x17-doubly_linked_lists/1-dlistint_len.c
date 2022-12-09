#include "lists.h"

/**
 * print_dlistint - prints data in nodes
 * @h: head of node
 * Return: how many nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;
	
	temp = h;
	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}

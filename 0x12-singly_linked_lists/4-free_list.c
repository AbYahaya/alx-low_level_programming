#include "lists.h"

/**
 * free_list - A function to free memory
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}

#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: pointer of the head of the list.
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while(head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

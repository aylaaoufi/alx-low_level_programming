#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: pointer of the head of the list.
 * Return: void.
 */ 

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_n;

	while (head)
	{
		new_n = head;
		free(new_n);
		head = head->next;
	}
}

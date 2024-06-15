#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n = malloc(sizeof(dlistint_t)), *curr;
	curr = *head;

	if (!head || !new_n)
		return NULL;
	new_n->n = n;
	new_n->next = NULL;
	if (!*head)
	{
		*head = new_n;
		new_n->prev = NULL;
	}
	else
	{
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new_n;
		new_n->prev = curr;
	}
	return (new_n);
}

#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of list.
 * @head: pointer of the head of the list.
 * @n: data to the new node.
 * Return: new node or NULL.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n = malloc(sizeof(dlistint_t)), *curr;

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
		curr = *head;
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new_n;
		new_n->prev = curr;
	}
	return (new_n);
}

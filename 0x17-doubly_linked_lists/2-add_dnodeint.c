#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a linked list.
 * @head: pointer of the head of the list.
 * @n: data added to the new node.
 * Return: new node or NULL.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n = malloc(sizeof(dlistint_t));

	if (!head || !new_n)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;
	if (!*head)
	{
		*head = new_n;
		new_n->next = NULL;
	}
	else
	{
		new_n->next = *head;
		(*head)->prev = new_n;
		*head = new_n;
	}
	return (new_n);
}

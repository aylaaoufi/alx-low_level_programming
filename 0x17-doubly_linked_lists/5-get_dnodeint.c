#include "lists.h"

/**
 * free_dlistint - frees a list.
 *
 * @head: pointer of the head of the list.
 *
 * @index: index of the nth node.
 *
 * Return: nth index or NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

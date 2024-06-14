#include "lists.h"

/**
 * dlistint_len - count number of elements in linked list.
 * @h: the head of dlistint_len.
 *
 * Return: return len of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}

#include "lists.h"

/**
 * print_dlistint - Prints all the elements.
 * @h: The head of the dlistint_t.
 *
 * Return: return number of elements.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elem++;
	}
	return (elem);
}

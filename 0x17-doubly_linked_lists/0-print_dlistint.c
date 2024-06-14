#include "lists.h"

/**
 * print_dlistint - return number of the elements and print data
 * @h: address of head
 *
 * Return: size of list
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
	return elem;
}

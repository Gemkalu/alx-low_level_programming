#include "lists.h"
/**
 * print_dlistint - This function that prints all the
 * element of a dlistint_t list.
 * @h: This is the pointer to the list
 * Return: This returns the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}

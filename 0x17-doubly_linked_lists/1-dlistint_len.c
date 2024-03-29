#include "lists.h"

/**
 * dlistint_len - This counts the number of elements in a linked dlistint_t list.
 * @h: This is the head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}

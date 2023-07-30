#include "lists.h"

/**
 * add_dnodeint_end - This adds a new node at the end
 * of a dlistint_t list.
 * @head: This pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *rec, *last;

	rec = malloc(sizeof(dlistint_t));
	if (rec == NULL)
		return (NULL);

	rec->n = n;
	rec->next = NULL;

	if (*head == NULL)
	{
		rec->prev = NULL;
		*head = rec;
		return (rec);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = rec;
	rec->prev = last;

	return (rec);
}

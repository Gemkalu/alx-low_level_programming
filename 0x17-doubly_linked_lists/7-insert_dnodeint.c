#include "lists.h"

/**
 * insert_dnodeint_at_index - This inserts a new node in a dlistint_t
 * list at a given position.
 * @h: This is a pointer to the head of the dlistint_t list.
 * @idx: This is the  position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *rec;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	rec = malloc(sizeof(dlistint_t));
	if (rec == NULL)
		return (NULL);

	rec->n = n;
	rec->prev = tmp;
	rec->next = tmp->next;
	tmp->next->prev = rec;
	tmp->next = rec;

	return (rec);
}

#include "lists.h"

/**
 * add_dnodeint - This adds a new node at
 * the beginning of a dlistint_t list.
 * @head: This points to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *rec;

	rec = malloc(sizeof(dlistint_t));
	if (rec == NULL)
		return (NULL);

	rec->n = n;
	rec->prev = NULL;
	rec->next = *head;
	if (*head != NULL)
		(*head)->prev = rec;
	*head = rec;

	return (rec);
}

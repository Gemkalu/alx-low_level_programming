#include "lists.h"

/**
 * free_dlistint - frees a linked dlistint_t list.
 * @head:  the  head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *rec;

	while (head)
	{
		rec = head->next;
		free(head);
		head = rec;
	}
}

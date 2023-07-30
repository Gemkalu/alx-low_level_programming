#include "lists.h"

/**
 * delete_dnodeint_at_index - This deletes a node from a dlistint_t
 * at a given index.
 * @head: This is the  pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (new == NULL)
			return (-1);
		new = new->next;
	}

	if (new == *head)
	{
		*head = new->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		new->prev->next = new->next;
		if (new->next != NULL)
			new->next->prev = new->prev;
	}

	free(new);
	return (1);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of a dlistint_t linked list
 * @index: index of the node starting from 0
 *
 * Return:	On success: returns the node at index index
 *		On failure: return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current)
	{
		current = current->next;
		if (i == index)
			return (current);
		i++;
	}

	return (NULL);
}

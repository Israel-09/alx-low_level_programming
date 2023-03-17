#include "lists.h"

/**
 * insert_middle - insert a new node in the middle of a dlistint_t
 * linked list.
 * @current: pointer the the position
 * @n: element to be added
 *
 * Return:	On success - pointer to a new node
 *		On failure - NULL
 */
dlistint_t *insert_middle(dlistint_t *current, int n)
{
	dlistint_t *new, *previous;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	previous = current->prev;
	new->n = n;
	new->next = current;
	new->prev = previous;
	current->prev = new;
	previous->next = new;

	return (new);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of a dlistint_t linked list
 * @idx: position to add the new node
 * @n: element to be add
 *
 * Return:	On success the new node added
 *		On failure NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *current = *h;

	if (!(*h) && idx != 0)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (current)
	{
		if (i == idx)
		{
			new = insert_middle(current, n);
			return (new);
		}
		current = current->next;
		i++;
	}
	if (i == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	return (NULL);
}

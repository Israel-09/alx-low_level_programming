#include "lists.h"

/**
 * sun_dlistint - returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: head of a dlistint_t linked list.
 *
 * Returns:	empty list - 0
 *		otherwise - 1
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (!current)
		return (sum);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

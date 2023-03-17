#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of a dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head)
	{
		free(head);
		current = current->next;
		head = current;
	}
}

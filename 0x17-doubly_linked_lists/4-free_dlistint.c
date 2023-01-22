#include "lists.h"

/**
 * free_dlistint - frees a list completely
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	if (head !=  NULL)
	{
		current = head->next;;
		free(head);
		head = current;
	}
}

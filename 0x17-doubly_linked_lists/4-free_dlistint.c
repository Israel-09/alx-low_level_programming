#include "lists.h"

/**
 * free_dlistint - frees a list completely
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current  *temp;

	current = head;
	if (current !=  NULL)
	{
		temp = current->next;;
		free(current);
		current = temp;
	}
}

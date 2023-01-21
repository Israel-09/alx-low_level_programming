#include "lists.h"

/**
 * free_dlistint - frees a list completely
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head ==  NULL)
		free(head);
	temp = head;
	while (temp->next != NULL)
	{
	}
}

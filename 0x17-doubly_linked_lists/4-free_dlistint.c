#include "lists.h"

/**
 * free_dlistint - frees a list completely
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head !=  NULL)
	{
	//	while (head->next)
		{
			head = temp;
//			head = head->next;
//			free(temp->next);
//			free(temp->prev);
			free(temp);
//			head = temp;
		}
	}
//	free(head);
}

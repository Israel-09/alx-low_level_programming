#include "lists.h"

/**
 * free_listint2 - frees listint_t list and set head to null
 * @head: the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}

#include "lists.h"

/**
 * free_listint2 - frees listint_t list and set head to null
 * @head: the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(head) || *head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

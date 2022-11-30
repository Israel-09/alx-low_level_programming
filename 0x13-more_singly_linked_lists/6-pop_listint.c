#include "lists.h"

/**
 * pop_listint - removes the head of a list
 * @head: the list's head
 * Return: 1 if sucessful otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (!head || *head == NULL)
		return (0);
	int ret = (*head)->n;
	temp = (*head)->next;
	free (*head);
	*head = temp;
	return (ret);
}

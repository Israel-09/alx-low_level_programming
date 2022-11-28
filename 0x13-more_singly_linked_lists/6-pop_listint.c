#include "lists.h"

/**
 * pop_listint - removes the head of a list
 * @head: the list's head
 * Return: 1 if sucessful otherwise 0
 */
int pop_listint(listint_t **head)
{
	int ret = (*head)->n;
	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	return (ret);
}

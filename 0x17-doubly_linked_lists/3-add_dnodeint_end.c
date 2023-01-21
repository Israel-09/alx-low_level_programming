#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: thr begining of a node
 * @n: the integer to be added
 * Return: the pointer to a new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	temp = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return NULL;
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		newNode->prev = NULL;
		return (newNode);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}

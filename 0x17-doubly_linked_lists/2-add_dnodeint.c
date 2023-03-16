#include "lists.h"

/**
 * add_dnodeint - adds a new nide at yhe begininh of a dlistint
 * @head: head of a list
 * @n: number to be stored
 * Return: pointer to the the newnode else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (!(*head))
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}

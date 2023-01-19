#include "lists.h"
/**
 * add_dnodeint - add a node to the begining of a list
 * @head: the head of the node
 * @n: the element to be added
 * Return: the address of the new list or n if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (!head)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}

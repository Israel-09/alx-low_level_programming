#include "lists.h"

/**
 * get_dnodeint_at_index - get the value of a node at a point.
 * @head: the head of a node
 * @index: is the location of the node
 * Return: the node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	node = head;
	while (node != NULL)
	{
		if (i == index)
			return (node)
	node = head->next;
		i++;
	}
	return (NULL);
}

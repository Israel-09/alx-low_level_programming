#include "lists.h"

/**
 * delete_node1 - deletes the first node of a dlistint_t
 * linked list
 * @head: head of the node
 * @current: current node
 * Return: on success returns 1 otherwise -1
 */
int delete_node1(dlistint_t **head, dlistint_t *current)
{
	dlistint_t *temp;

	temp = current->next;
	if (current)
	{
		if (temp)
		{
			temp->prev = NULL;
			free(current);
			*head = temp;
			return (1);
		}
		free(current);
		*head = NULL;
		return (1);
	}
	return (-1);
}

/**
 * delete_last_node - deletes the last node of a dlistint_t
 * linked list
 * @head: head of the node
 * @current: current node
 * Return: on success returns 1 otherwise -1
 */
int delete_last_node(dlistint_t **head, dlistint_t *current)
{
	dlistint_t *temp;

	if (current)
	{
		if (current->prev)
		{
			temp = current->prev;
			free(current);
			temp->next = NULL;
			return (1);
		}
		free(current);
		*head = NULL;
		return (1);
	}
	return (-1);
}

/**
 * delete_dnodeint_at_index - deletes a new node at a given position.
 * @head: head of a dlistint_t linked list
 * @index: position to add the new node
 *
 * Return:	On success 1
 *		On failure -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp, *prev, *current;

	if (!(*head))
		return (-1);

	current = prev = *head;
	if (index == 0)
	{
		return (delete_node1(head, current));
	}
	while (current)
	{
		prev = current;
		if (i == index && current->next)
		{
			temp = current->next;
			temp->prev = prev;
			prev->next = temp;
			free(current);
			return (1);
		}
		if (i == index)
		{
			return (delete_last_node(head, current));
		}
		current = current->next;
		i++;
	}

	return (-1);
}

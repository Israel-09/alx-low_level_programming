#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add an integer node to to a list
 * @head: pointer to the pointer head
 * @n: is data integer.
 *
 * Return: pointer to the new node or NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list
 * @head: the first node
 * @str: the content of the new node
 *
 * Return: the new node on success or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *loop = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (loop == NULL)
	{
		*head = new;
	}
	else
	{
		while (loop->next)
			loop = loop->next;
		loop->next = new;
	}
	return (*new);
}

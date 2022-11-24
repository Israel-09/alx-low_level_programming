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
	list_t new;

	while (head != NULL)
	{
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	*head = new;
	new->str = strdup(str);
	new->len = strlen(str);
	new = NULL;
	return (NULL);
}

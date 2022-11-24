#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the head of a list
 * @head: pointer to the address of the head
 * @str: the string to be compied to the new node
 *
 * Return: the address to the new element of NULL of failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	*head  = new_node;
	return (new_node);
}

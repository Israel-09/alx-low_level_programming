#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the list
 * @head: the first node
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

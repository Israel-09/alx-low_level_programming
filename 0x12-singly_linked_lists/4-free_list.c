#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the list
 * @head: the first node
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head->next);
	free(head);
}

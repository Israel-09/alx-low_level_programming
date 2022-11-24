#include <stdlib>
#include "lists.h"

/**
 * list_len - lenght of a list
 * @h: the list;
 *
 * Return: the number of element in a list.
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem += 1;
		h = h->next;
	}
	return (elem);
}

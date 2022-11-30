#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - prints an integer list
 * @h: the pointer to the head
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}

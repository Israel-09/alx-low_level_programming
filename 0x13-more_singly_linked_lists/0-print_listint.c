#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints an integer list
 * @h: the pointer to the head
 *
 * Return: the nimber of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (-1);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}

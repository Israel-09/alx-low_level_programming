#include "lists.h"

/**
 * print_dlistint - prints the integers in a double linked list
 * @h: the head of the list
 * Return: the number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_elem = 0;

	if (!h)
		return (n_elem);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_elem++;
	}
	return (n_elem);
}

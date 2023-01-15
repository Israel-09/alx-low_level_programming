#include "lists.h"

/**
 * dlistint_len - counts the elements of aa double linked list
 * @h: the head of the list
 * Return: the number of elements printed
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_elem = 0;

	if (!h)
		return (n_elem);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		h = h->next;
		n_elem++;
	}
	return (n_elem);
}

#include "lists.h"

/**
 * print_dlistint - prints all the elements in a dlist_int
 * @head: head of a dlist_int
 *
 * Return: the amount of elements of a dlist_int
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t i = 0;

	current = (dlistint_t *)h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}

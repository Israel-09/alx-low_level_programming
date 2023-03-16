#include "lists.h"

/**
 * dlistint_len - returns the amount of element in a linked dlistint list
 * @h: head of a dlistint list
 * Return: nunber of element in a linked dlistint list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *current;

	current = (dlistint_t *)h;
	while(current)
	{
		i++;
		current = currrnt->next;
	}
	return (i);
}

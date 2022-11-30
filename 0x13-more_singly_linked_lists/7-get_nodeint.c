#include "lists.h"

/**
 * get_nodeint_at_index - gets the pointer to node n
 * @head: head of the list
 * @index: is the index to be searched
 *
 * Return: pointer to the node or NUll if index does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *n_index;

	count = 0;
	if (head != NULL)
	{
		n_index = head;
		while (n_index->next)
		{
			if (count == index)
				return (n_index);
			n_index = n_index->next;
			count++;
		}
	}
	return (NULL);
}

#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: thr begining of a node
 * @n: the integer to be added
 * Return: the pointer to a new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	(void)head;
/*	temp = *head;*/
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return NULL;
/*	while (temp->next)*/
/*		temp = temp->next;*/
	newNode->n = n;
	newNode->next = NULL;
/*	newNode->prev = temp;*/
	return (newNode);
}

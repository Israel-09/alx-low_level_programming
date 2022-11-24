#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * len - finds the lenght of a string
 * @str: - the string to be manipulated
 *
 * Return: the lenght of the string
 */
int len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * print_list - prints all the element of a list
 * @h: the pointer to the list
 *
 * Return: the number if nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", len(h->str), h->str);
		nodes += 1;
	}
	return (nodes);
}

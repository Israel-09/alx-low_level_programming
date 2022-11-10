#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates a|ay of size size and initialisez with char c
 * @size: the size of array
 * @c: character to initialize.
 *
 * Return: pointer to null if size is 0, otherwise pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	arr[i] = '\0';
	return (arr);
}

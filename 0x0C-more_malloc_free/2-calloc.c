#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: the nunber of members of the array
 * @size: the saize of the data type
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int tsize, i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tsize = nmemb * size;
	array = (char *)malloc(tsize);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < tsize; i ++)
		array[i] = 0;
	return ((void *)array);
}

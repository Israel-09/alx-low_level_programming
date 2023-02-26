#include "main.h"

/**
 * malloc_checked - allocates a memory for of size b
 * @b: the size of the allocated memory
 *
 * Return: pointer to the allocated memory location
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);
	if (mem == NULL)
	{
		return (NULL)
	}
	return (mem);
}

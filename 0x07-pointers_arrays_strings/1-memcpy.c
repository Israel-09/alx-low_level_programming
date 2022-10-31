#include "main.h"

/**
 * _memcpy - copies n byte of memory area from src to dest.
 * @dest: the destination of the area to be copied.
 * @src: the source of the area to be copied.
 *
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

}

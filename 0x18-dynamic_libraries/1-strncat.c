#include "main.h"

/**
 * _strncat - it concatenates two strings at most n bytes.
 * @dest: where the string is the be concatenated.
 * @src: the string to be copied.
 * @n: the number of bytes to copy
 *
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}

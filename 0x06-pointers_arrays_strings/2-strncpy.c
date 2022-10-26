#include "main.h"

/**
 * _strncpy - copyies a string from one address to another. to n bytes
 * @dest: the destination forr the copies string.
 * @src: the copied string
 * @n: the number of bytes to be copied
 *
 * Return: the address to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

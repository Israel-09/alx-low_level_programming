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

	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (n > i)
		dest[i] = '\0';
	else
		dest[j] = '\0';
	return (dest);
}

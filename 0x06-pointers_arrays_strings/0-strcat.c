#include "main.h"

/**
 * _strcat - concatenates src to dest
 * @dest: destination of the string.
 * @src: the string to be concatenated.
 *
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int len, i, j;

	for (len = 0;  src[len] != '\0'; len++)
	{
	}

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

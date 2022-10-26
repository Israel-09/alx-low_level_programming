#include "main.h"

/**
 * _strcat - concatenate src to dest
 * @dest: destination of the string
 * @src: the string to be concatenated
 *
 * Return: the pointer to to dest.
 */
char *_strcat(char *dest, char *src)
{
	int len, i, j;
	
	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	j -= 1;
	i = 0;
	while (src[i] != '\0' && i < len && src[i] != '\n')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}

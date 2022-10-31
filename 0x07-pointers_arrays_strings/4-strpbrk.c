#include "main.h"

/**
 * _strpbrk - gets the  length of a prefix substring
 * @s: string the be searched.
 * @accept: the string to be checked
 *
 * Return: the the byte that matches s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}

		}
	}
	return (NULL);
}

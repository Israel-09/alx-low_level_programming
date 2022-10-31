#include "main.h"

/**
 * _strchr - locates the chracter c in string s
 * @s: the string to be searched
 * @c: the chracter to be located
 *
 * Return: the location of c.
 */
char *_strchr(char *s, char c)
{
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	for (i = 0; i <= j + 1; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

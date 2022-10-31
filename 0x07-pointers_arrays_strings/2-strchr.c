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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

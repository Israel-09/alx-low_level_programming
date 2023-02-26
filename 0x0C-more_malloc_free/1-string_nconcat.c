#include "main.h"

/**
 * _strlen - length of a string
 * @s: the string
 * Return: the string lenght
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two string
 * @s1: the first string
 * @s2: the second string
 * @n: thr nunber of characters of s2 to be copied.
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = _strlen(s1);
	i = _strlen(s2);
	if (n >= (unsigned int)i)
		len += i;
	len += n;

	concat = malloc(sizeof(char) * len + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; i < len; i++, j++)
	{
		concat[i] = s2[j];
	}
	concat[i] = '\0';
	return (concat);
}

#include "main.h"

/**
 * str_concat - concatenates to string together
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *n_str;
	int len, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len = strlen(s1);
	len += strlen(s2);
	n_str = malloc(sizeof(char) * (len + 1));
	if (n_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		n_str[i] = s1[i];
	}
	for (j = 0; i <= len; i++, j++)
	{
		n_str[i] = s2[j];
	}
	n_str[i] = '\0';
	return (n_str);

}

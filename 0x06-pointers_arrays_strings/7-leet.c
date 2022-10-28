#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	char let[] = "AEOTL";
	char num[] = "43071";
	int i, j;

	printf("%s\n", s);
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (let[j] != '\0')
		{
			if (s[i] == let[j] || s[i] == let[j] + 32)
			{
				s[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}

#include "main.h"

/**
 * rot13 - encodes a string using rot 13.
 * @s: the string to be encoded.
 *
 * Return: the string s
 */
char *rot13(char *s)
{
	char real[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char code[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; real[j] != '\0'; j++)
		{
			if (s[i] == real[j])
			{
				s[i] = code[j];
				break;
			}
		}
	}
	return (s);
}

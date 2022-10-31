#include "main.h"

/**
 * _strspn - gets the  length of a prefix substring
 * @s: string the be searched.
 * @accept: the string to be checked
 *
 * Return: the nummber of bytes in the initial segment of s
 * which consists of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int bytes, change;

	bytes = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		change = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes += 1;
				change = 1;
			}

		}
		if (change == 0)
			break;
	}
	return (bytes);
}

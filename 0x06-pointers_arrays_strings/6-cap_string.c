#include "main.h"

/**
 * cap_string - capitalizes all the word in a string.
 * @s: string to be manipulated.
 *
 * Return: the string.
 */
char *cap_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (j = 0; j < i; j++)
	{
		if (s[j] == ' ' || s[j] == '	' || s[j] == '\n' || s[j] == ',' || s[j] == ';')
		{
			if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
			{
				s[j + 1] -= 32;
			}
		}
		else if (s[j] == '.' || s[j] == '.' || s[j] == '!' || s[j] == '?' || s[j] == '\"')
		{
			if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
			{
				s[j + 1] -= 32;
			}
		}
		else if (s[j] == '(' || s[j] == ')' || s[j] == '{' || s[j] == '}')
		{
			if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
			{
				s[j + 1] -= 32;
			}
		}

	}
	return (s);
}

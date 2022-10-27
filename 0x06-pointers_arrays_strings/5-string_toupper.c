#include "main.h"

/**
 * string_toupper - converts the lower case in a string to upper case
 * @s: the string to  be mainipulated
 * Return: the string;
 *
 */
char *string_upper(char *s)
{
	int 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}


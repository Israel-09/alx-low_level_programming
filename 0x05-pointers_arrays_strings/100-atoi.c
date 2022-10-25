#include "main.h"

/**
 * _atoi - converts the digits in a string to intgers
 * @s: the string to be manipulated.
 *
 * Return: the integer.
 */
int _atoi(char *s)
{
	int i, j, k, l;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	k = i;
	for (i = 0; i < k; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			j += s[i] - '0';
			j *= 10;
		}
	}
	j /= 10;
	for (i = 0; i < k; i++)
	{
		if (s[i] == '-')
			l =  i;
		if (s[i] <= '0' && s[i] >= '9')
			break;
	}
	if (l < i)
		j *= -1;
	return (j);
}

#include "main.h"

/**
 * _atoi - converts the digits in a string to intgers
 * @s: the string to be manipulated.
 *
 * Return: the integer.
 */
int _atoi(char *s)
{
	int i, j, k, l, m;

	j = m = l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	k = i;
	for (i = 0; i < k; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			m = i;
			if (m - l == 1 || l == 0)
			{
				j += s[i] - '0';
				j *= 10;
				l = i;
			}

		}
	}
	j /= 10;
	for (i = 0; i < k; i++)
	{
		if (s[i] == '-')
			l =  i;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
	}
	if (i - l == 1)
		j *= -1;
	return (j);
}

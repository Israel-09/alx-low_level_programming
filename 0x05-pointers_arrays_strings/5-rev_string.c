#include "main.h"

/**
  * rev_string - reverses a string.
  * @s: string to be reversed.
  */
void rev_string(char *s)
{
	char rs[30];
	int i, j;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
	}
	i -= 1;
	j = 0;
	for (i = i; i >= 0; i--)
	{
		rs[i] = s[j];
		j++;
	}
	i += 1;
	j -= 1;
	for (j  = j; j >= 0;  j--)
	{
		s[j] = rs[j];
	};
	s[i] = '\0';
}

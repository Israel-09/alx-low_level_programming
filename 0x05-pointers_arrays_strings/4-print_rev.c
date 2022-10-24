#include "main.h"

/**
 * print_rev - prints the revera of strings
 * @s: string to be reversed and printed
 */
void print_rev(char *s)
{
	int i;
	
	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
	}
	printf("i : %d\n", i);
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

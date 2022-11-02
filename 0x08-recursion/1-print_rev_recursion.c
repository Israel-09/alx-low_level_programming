#include "main.h"

/**
 * len - calculates thr length of string.
 * @s: tbe string to be calculated
 *
 * Return: the lenght
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * _print_rev_recursion - prints a string reversed using recursion
 * @s: string to be reversed
 */

void _print_rev_recursion(char *s)
{
	int l;

	l = len(s) - 1;
	if (l == 0)
	{
		_putchar(s[0]);
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[l]);
		_print_rev_recursion(s + 1);
	}
}

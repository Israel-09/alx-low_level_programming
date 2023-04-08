#include "main.h"

/**
 * _puts - prints out string to stdout
 * @str: the string to be printed.
 *
 * Return: void
 */
void _puts(char *s)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
		_putchar(s[i]);
	}
	_putchar('\n');
}

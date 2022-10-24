#include "main.h"

/**
 * _puts - prints out string to stdout
 * @str: the string to be printed.
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}

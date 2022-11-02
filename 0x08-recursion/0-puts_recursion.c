#include "main.h"

/**
 * _puts_recursion - prints the contents of a string
 * using recursion
 *
 * @s: the string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

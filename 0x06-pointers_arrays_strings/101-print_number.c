#include "main.h"

/**
 * print_number - prints the number n
 * @n: number to be printed
 *
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;
	if (i >= 1000)
	{
		_putchar(i / 1000 + '0');
		_putchar((i / 100) % 10 + '0');
		_putchar((i % 100) / 10 + '0');
	}
	else if (i >= 100)
	{
		_putchar(i / 100 + '0');
		_putchar((i / 10) % 10 + '0');
	}
	else if (i >= 10)
		_putchar(i / 10 + '0');
	_putchar(i % 10 + '0');
}

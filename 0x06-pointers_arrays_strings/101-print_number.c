#include "main.h"

/**
 * print_number - prints the number n
 * @n: number to be printed
 *
 */
void print_number(int n)
{
	int i, j;
	char num[50];
	
	if (n < 0)
	{
		_putchar('-');
		j = -n;

	}
	else 
		j = n;

	for (i = 0; j > 0; i++)
	{
		num[i] = (j % 10) + '0';
	}
	num[i] = '\0';
	for (i -= 1; i > 0; i--)
		_putchar(num[i]);

/*	if (n < 0)
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
*/
}

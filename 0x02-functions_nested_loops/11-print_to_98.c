#include "main.h"

/**
 * greater_than_98 - runs if n is greater than or equal to 98
 * @n: parameter
 */
void greater_than_98(int n)
{
	for (; n >= 98; n--)
	{
		if (n >= 100)
		{
			_putchar(n / 100 + '0');
		}
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
/**
 * less_than_98 - runs if n is less than 98
 * @n: parameter
 */
void less_than_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n < 0)
		{
			_putchar('-');
			if (n <= -10)
			{
				_putchar(-n / 10 + '0');
				_putchar(-n % 10 + '0');
			}
			else
			{
				_putchar(-n + '0');
			}
		}
		else if (n >= 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(n + '0');
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
/**
 * print_to_98 - prints real numbers from n to 98
 * @n: parameter
 */
void print_to_98(int n)
{
	if (n >= 98)
		greater_than_98(n);
	else
		less_than_98(n);
}

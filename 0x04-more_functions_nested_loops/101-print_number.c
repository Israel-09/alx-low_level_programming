#include "main.h"

/**
 * greater_than -executes when n is greater than
 * @n: number to be printed
 */
void greater_than(int n)
{
	if (n >= 1000)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n % 100) / 10 + '0');
	}
	else if (n >= 100)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
	}
	else if (n >= 10)
		_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}

/**
 * less_than - executes if n < 0
 * @n: number to be printed
 */
void less_than(int n)
{
	_putchar('-');
	if (n <= -1000)
	{
		_putchar(-n / 1000 + '0');
			_putchar((-n / 100) % 10 + '0');
		_putchar((-n % 100) / 10 + '0');
	}
	else if (n <= -100)
	{
		_putchar(-n / 100 + '0');
		_putchar((-n / 10) % 10 + '0');
	}
	else if (n <= -10)
	_putchar(-n / 10 + '0');
	_putchar(-n % 10 + '0');

}
/**
 * print_number - prints number using putchar function
 * @n: is the number to be printed
 */
void print_number(int n)
{
	if (n >= 0)
		greater_than(n);
	else
		less_than(n);
}

#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @n: the parameter
 *
 * Return: last digit. otherwise some random value.
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}

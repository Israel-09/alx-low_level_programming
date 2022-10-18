#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @n: the parameter
 *
 * Return: last digit. otherwise some random value.
 */
int print_last_digit(int n)
{
	n %= 10;
	_putchar(n +'0');
	return (n);
}

#include "main.h"

/**
 * print_binary - prints the binary of an integer
 * @n: the integer to be converted
 */
void print_binary(unsigned long int n)
{
	long int i = 63;
	unsigned long int count;

	if (n == 0)
		putchar('0');
	for (i = 31; i >= 0; i--)
	{
		count = 1 << i;
		if (count <= n)
		{
			if ((n & count) == count)
				putchar('1');
			else
				putchar('0');
		}

	}
}

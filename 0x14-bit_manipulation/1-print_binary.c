#include "main.h"

/**
 *  * print_binary - prints the binary of an integer
 *   * @n: the integer to be converted
 *    */
void print_binary(unsigned long int n)
{
	unsigned long int current;
	int i, found = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
			found = 1;
		if (found)
		{
			if (current & 1)
				putchar('1');
			else
															putchar('0');
													}
	}
}

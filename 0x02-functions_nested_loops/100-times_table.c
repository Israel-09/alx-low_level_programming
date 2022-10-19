#include "main.h"

/**
 * print_times_table - prints the times table of 9
 * @n: number of times to print
 */
void print_times_table(int n)
{
	int i, m, multiply;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (m = 0; m <= n; m++)
			{
				multiply = m * i;
				if (multiply >= 100)
				{
					_putchar(multiply / 100 + '0');
					_putchar((multiply / 10) % 10 + '0');
					_putchar(multiply % 10 + '0');
				}
				else if (multiply >= 10)
				{
					if (m > 0)
						_putchar(' ');
					_putchar(multiply / 10 + '0');
					_putchar(multiply % 10 + '0');
				}
				else
				{
					if (m > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(multiply + '0');
				}
				if (m < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

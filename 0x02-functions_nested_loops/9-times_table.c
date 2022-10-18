#include "main.h"

/**
 * times_table - prints the times table of 9
 */
void times_table(void)
{
	int n;
	int m;
	int multiply;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			multiply = m * n;
			if (multiply >= 10)
			{
				_putchar(multiply / 10 + '0');
				_putchar(multiply % 10 + '0');
				if (m < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (m > 0)
				{
					_putchar(' ');
				}
				_putchar(multiply + '0');
				if (m < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

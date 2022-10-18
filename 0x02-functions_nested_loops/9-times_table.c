#include "main.h"

/**
 * times_table - prints the times table of 9
 */
void times_table(void)
{
	int n;
	int m;
	int multiply;

	for(n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			multiply = m * n;
			_putchar(multiply);
			_putchar(' ');
		}
		_putchar('\n');
	}
}

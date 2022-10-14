#include <stdio.h>

/**
 * main - prints possible value for 2 digits
 * Returns: 0, program always successfull
 */
int main(void)
{
	int i;
	int n;
	int j;

	for (i = '0'; i < '9'; i++)
	{
		for (n = i; n <= '9'; n++)
		{
			for (j = n; n <= '9'; j++)
			{	putchar(i);
				putchar(n);
				putchar(j);
				if ((i < '7') || (n < '8') || (j < '7'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

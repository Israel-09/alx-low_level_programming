#include <stdio.h>

/**
 * main - prints the possible combination of two two digits
 * Return: 0 always
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a; b <= '9'; b++)
		{
			for (c = b; c <= '9'; c++)
			{
				for (d = c; d <= '9'; d++)
				{

					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

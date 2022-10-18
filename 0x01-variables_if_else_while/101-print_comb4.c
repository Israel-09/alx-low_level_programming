#include <stdio.h>

/**
 * main - prints the possibilitis of three numbers;
 * Return: 0 always
 */
int main(void)
{
	int m;
	int n;
	int o;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = m; n <= '9'; n++)
		{
			for (o = n; o <= '9'; o++)
			{
				if (n > m && o > n)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m != '7' || o != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

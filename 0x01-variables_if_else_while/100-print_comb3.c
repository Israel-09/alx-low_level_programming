#include <stdio.h>

/**
 * main - prints possible combinations oc two digits
 *
 * Return: 0 to indicate program success
 */
int main(void)
{
	int i;
	int n;

	for (i = '0'; i < '9'; i++)
	{
		for (n = i; n <= '9'; n++)
		{
			if (n > i)
			{
				putchar(i);
				putchar(n);
				if ((i < '8') || (n < '9'))
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

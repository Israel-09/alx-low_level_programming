#include <stdio.h>

/**
 * main - prints the digit 0 - 9 using putchar
 *
 * Return: 0 if program is a success
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num < '9')
		{	putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints the hexadecimal deigit in base 16
 *
 * Return: 0 always successful#
 */
int main(void)
{
	int i;
	char ch;

	for (i = '0'; i <= '9';  i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

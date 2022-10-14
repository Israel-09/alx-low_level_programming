#include <stdio.h>

/**
 * main - prints out numbers zero to ten
 *
 * Return: 0 always
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}


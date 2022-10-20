#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int a, b, c, i;

	a = 1;
	b = 2;

	printf("%d, ", a);
	printf("%d, ", b);

	for (i = 0; i <  48; i++)
	{
		c = a + b;
		printf("%d", c);
		if (i < 47)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}


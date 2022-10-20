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

	int a = 1;
	int b = 2;

	printf("%d, ", a);
	printf("%d, ", b);

	for (i = 0; i < 5; i++)
	{
		c = a + b;
		printf('"%d, ", c);
		a = b;
		b = c;
	}
	return (0);
}


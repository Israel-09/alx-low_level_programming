#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	long int a, b, c;
	int i;

	a = 1;
	b = 2;

	printf("%li, ", a);
	printf("%li, ", b);

	for (i = 0; i <  48; i++)
	{
		c = a + b;
		printf("%li", c);
		if (i < 47)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}


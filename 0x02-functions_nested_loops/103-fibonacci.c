#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	long int a;
	long int b;
	long int c;
	long int add;
	
	a = 1;
	b = 2;
	add = 2;
	do {
		c = a + b;
		if (c % 2 == 0)
		{
			add += c;
		}
		a = b;
		b = c;
	} while (c < 4000000);
	printf("%li\n", add);
	return (0);
}


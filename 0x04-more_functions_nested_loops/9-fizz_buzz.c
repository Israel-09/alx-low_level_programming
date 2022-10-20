#include <stdio.h>

/**
 * main - print 1 to 100, replace numbers divisible by 3  with 'fizz' and
 * 5 with 'buzz' and both with 'fizzbuzz'
 *
 * Return: always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d ", i);
		if (i != 100)
			putchar(' ');
	}
	printf("\n");
	return (0);
}

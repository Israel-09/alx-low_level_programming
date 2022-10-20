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
		if (i % 3 == 0)
			printf("fizz ");
		else if (i % 5 == 0)
			printf("buzz ");
		else if (i % 15 == 0)
			printf("fizzbuzz ");
		else
			printf("%d ", i);
	}
	printf("\b\n");
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the sign of numbers
 * Return: 0 if the program runs succesfully. otherwise any othe digit
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* checks if the n is positive */
	if (n > 0)
		printf("%d is positive\n", n);
	/* checks if the n is zero */
	else if (n == 0)
		printf("%d is zero\n", n);
	/* check if the n is negative */
	else
		printf("%d is negative\n", n);
	return (0);
}



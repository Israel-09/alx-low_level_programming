#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the value of the last digit in a randomly generated number
 * Return: 0 if the program runs succesfully. otherwise any othe digit
 */
int main(void)
{
	int n;
	int l_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_num = n % 10;
	if (l_num > 5)
		printf("Last digit of %d is %d and is greater than 5", n, l_num);
	else if (l_num == 0 )
		printf("Last digit of %d is %d and is 0", n, l_num);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, l_num);
	return (0);
}



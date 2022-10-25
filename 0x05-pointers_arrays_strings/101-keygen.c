#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates a random password for the user
 *
 * Return: 0 always
 */
int main(void)
{
	int password[15];
	time_t t;
	int i, num;

	srand(time(&t));
	for (i = 0; i < 14; i++)
	{
		num = rand() % 9;
		password[i] = num;
		printf("%d",password[i]);
	}
	putchar('\n');
	return (0);
}


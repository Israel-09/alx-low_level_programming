#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates a random password for the user
 *
 * Return: 0 always
 */
int main(void)
{
	char password[15];
	time_t t;
	int i, num;

	srand(time(&t));
	for (i = 0; i < 14; i++)
	{
		num = rand() % 9;
		password[i] = num + '0';
	}
	password[i] = '\0';
	printf("The generated password is: %s\n", password);
	return (0);
}


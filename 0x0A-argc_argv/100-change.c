#include <stdio.h>
#include <stdlib.h>

/**
 * chg - calculates the actual change
 * @cent: the money to be changed.
 *
 * Return: the actual change.
 */
int chg(int cent)
{
	int i;

	if (cent <= 0)
		return (0);
	for (i = 0; cent != 0; i++)
	{
		if (cent >= 25)
		{
			cent -= 25;
			continue;
		}
		if (cent >= 10)
		{
			cent = cent - 10;
			continue;
		}
		if (cent >= 5)
		{
			cent = cent - 5;
			continue;
		}
		if (cent >= 2)
		{
			cent = cent - 2;
			continue;
		}
		if (cent >= 1)
		{
			cent = cent - 1;
			continue;
		}

	}
	return (i);
}
/**
 * main - number of coin to make change for an amount.
 * @argc: the nunber of arguements of a function.
 * @argv: pointer to the array of arguements.
 *
 * Return: 0 if succesful else return 1
 */
int main(int argc, char *argv[])
{
	int change, k;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	k = atoi(argv[1]);
	change = chg(k);
	printf("%d\n", change);
	return (0);
}

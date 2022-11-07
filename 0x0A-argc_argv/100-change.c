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
	int i, change;

	change = 0;
	for (i = 0; cent == 0; i++)
	{
		if (cent > 25)
		{
			cent -= 25;
			change += 1;
		}
		else if (cent > 10)
		{
			cent -= 10;
			change += 1;
		}
		else if (cent > 5)
		{
			cent -= 5;
			change += 1;
		}
		else if (cent > 2)
		{
			cent -= 2;
			change += 1;
		}
		else if (cent > 1)
		{
			cent -= 1;
			change += 1;
		}
		printf("%d", change);
	}
	return (change);
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

}

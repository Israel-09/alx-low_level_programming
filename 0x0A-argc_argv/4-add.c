#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the addition of arguements.
 * @argc: the nunber of arguements
 * @argv: the pointer to the arrray of arguements.
 *
 * Return: 0 if program is successful. otherwise 1.
 */
int main(int argc, char *argv[])
{
	int i, k;
	int sum, num;

	if (argc < 2)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		for (k = 0; k < (int)strlen(argv[i]); k++)
		{
			if (!(argv[i][k] >= '0' && argv[i][k] <= '9'))
			{
				puts("Error");
				return (1);
			}
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

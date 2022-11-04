#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs multiplication on the arguements of main.
 * @argc: the number of arguements
 * @argv: the array of arguements
 *
 * Return: 0 if main has arguements otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc - 1 == 0)
	{
		puts("Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}

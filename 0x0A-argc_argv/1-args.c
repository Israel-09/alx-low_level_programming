#include <stdio.h>

/**
 * main - it prints the number of arguements passed
 * in the function.
 * @argc: the number of arguements
 * @argv: the arguements passed in the funtion.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

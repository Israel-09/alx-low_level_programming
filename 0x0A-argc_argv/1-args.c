#include <stdio.h>

/**
 * main - it prints the number of arguements passed
 * in the function.
 * @argc: the number of arguements
 * @argv: the arguements passed in the funtion.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

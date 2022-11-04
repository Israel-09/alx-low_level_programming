#include <stdio.h>

/**
 * main - print whatever is passed as arguement
 * @argc: the amount of arguements
 * @argv: the pointer to array of arguments
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

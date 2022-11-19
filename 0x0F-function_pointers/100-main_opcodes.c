#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcode of it arguement.
 * @agrc: the number of arguements
 * @argv: the array of arguements.
 *
 * Return; 0 always(sucessful)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		puts("Eroor");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx\n", arr[i]);
	}
	return (0);
}

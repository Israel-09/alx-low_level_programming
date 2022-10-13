#include <stdio.h>

/**
 * main - prints the size of the differents data types on my pc
 * Return: 0 if the program runs without error. otherwise 1
 */
int main(void)
{

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);
}

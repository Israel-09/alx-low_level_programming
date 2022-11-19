#include <stdio.h>

/**
 * main - prints the name of the source file
 *
 * Return: 0 alway(successful)
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}

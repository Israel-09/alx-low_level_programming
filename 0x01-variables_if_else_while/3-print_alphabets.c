#include <stdio.h>

/**
 * main - prints out letter a-z in small and upper case
 *
 * Return: 0 always
 */
int main(void)
{
	int alpha = 'a';
	int alpha_u = 'A';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha_u = 'A'; alpha_u <= 'Z'; alpha_u++)
		putchar(alpha_u);
	putchar('\n');
	return (0);
}


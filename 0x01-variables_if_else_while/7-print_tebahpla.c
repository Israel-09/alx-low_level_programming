#include <stdio.h>

/**
 * main - prints out letter a-z in the reversed case
 *
 * Return: 0 always
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>

/**
 * main - prints out letter a-z in small case
 *
 * Return: 0 always
 */
int main(void)
{
	int alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}


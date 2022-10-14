#include <stdio.h>

/**
 * main - prints out letter a-z in small case exempting letters e and q
 *
 * Return: 0 always
 */
int main(void)
{
	int alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((alpha == 'e') || (alpha == 'q'))
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}


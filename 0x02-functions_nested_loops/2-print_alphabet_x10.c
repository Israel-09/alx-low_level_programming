#include "main.h"

/**
 * print_alphabet_x10 - prints the letter a-z ten times
 */
void print_alphabet_x10(void)
{
	int alph;
	int times;

	times = 1;
	for (; times <= 10; times++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}

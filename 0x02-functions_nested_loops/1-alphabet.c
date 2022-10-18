#include "main.h"

/**
 * print_alphabet - prints the letter a-z
 */
void print_alphabet(void)
{
	int alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}

#include "main.h"
/**
  * puts_half - prints the second halp of a string
  * @str: string to be manipulated
  */
void puts_half(char *str)
{
	int i, n;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
	}
	i -= 1;
	if ((i % 2 == 0))
		n = i / 2;
	else
		n = (i - 1) / 2;

	for (n = n + 1; n <= i; n++)
		_putchar(str[n]);
	_putchar('\n');
}

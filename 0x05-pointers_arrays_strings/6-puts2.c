#include "main.h"

/**
 * puts2 - prints 1 and omit 1 string
  * @str: string to be manipulated.
  */
void puts2(char *str)
{
	int j, i;

	j = 0;
	for (i = 0;  ; i++)
	{
		if (str[i] == '\0')
			break;
	}
	for (j = 0; j < i - 1; j += 2)
		_putchar(str[j]);
	_putchar('\0');
	_putchar('\n');
}

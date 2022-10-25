#include "main.h"

/**
  * puts2 - prints 1 and omit 1 string
  * @str: string to be manipulated.
  */
void puts2(char *str)
{
	int j, i;

	j = 0;
	for (i = 0; ; i++, j += 2)
	{
		if (i == '\n')
			break;
		_putchar(str[j]);
	}
	
	_putchar('\0');
	_putchar('\n');
}

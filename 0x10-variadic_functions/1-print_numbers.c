#include "variadic_functions.h"

/**
 * print_numbers - prints numbers input
 * @seperator: the chwr to seperate nums.
 * @n: the total nums
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if(!seperator)
			printf("%d", va_arg(list, int));
		else if (seperator && i == 0)
			printf("%d", va_arg(list, int));
		else (seperator && i == 0)
			printf("%s%d", seperator, va_arg(list, int));
	}
	va_end(list);
	putchar('\n');
}

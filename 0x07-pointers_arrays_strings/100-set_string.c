#include "main.h"

/**
 * set_string  - set the value of a pointer to a char
 * @s: the pointer to be set.
 * @to: location.
 */
void set_string(char **s, char *to)
{
	int i;

	printf("%c, %c\n", to[6], (*s)[5]);
	printf("%c, %c\n", to[6], (*s)[3]);
	for (i = 0; (*s)[i] != '\0'; i++)
	{
		(*s)[i] = to[i];
	}
}

#include "main.h"

/**
 * set_string  - set the value of a pointer to a char
 * @s: the pointer to be set.
 * @to: location.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

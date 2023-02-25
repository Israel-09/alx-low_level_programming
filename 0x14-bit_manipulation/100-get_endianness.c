#include "main.h"

/**
 * get_endianness - gets the endianess of a machine
 *
 * Return: 0 for big endian and 1 for small endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}

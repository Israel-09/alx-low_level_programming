#include "main.h"

/**
 * set_bit - set the bit at index to 1
 * @n: the number to be manipulated
 * @index: the index of the number to be manipulated
 *
 * Return: the manipulated number.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (!n || index > 63)
		return (-1);
	mask = 1 << index;
	*n = *n | mask;
	return (1);
}

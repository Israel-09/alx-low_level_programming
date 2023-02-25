#include "main.h"
/**
 * clear_bit - sets the bit at index to 0
 * @n: pointer to the number
 * @index: the poistion of the bit to be cleared
 *
 * Return: 1 on success, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL || index > 63)
		return (-1);
	mask = ~(1 << index);
	*n = mask & *n;
	return (1);
}

#include "main.h"

/*
 * set_bit - ste the bit at index to 1
 * @n: the number to be manipulated
 * @index: the index of the number to be manipulated
 *
 * Return: the manipulated number.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	return (n | (1 << index));
}

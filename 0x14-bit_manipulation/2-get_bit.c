#include "main.h"

/**
 * get_bit - gets the bit at the index given of n
 * @n: the number to manipulated
 * @index: the indext to be searched for.
 * Return: the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	unsigned long int value;

	value = 1 << index;
	if (value > n)
		return (-1);
	if ((n & value) == value)
		return (1);

}

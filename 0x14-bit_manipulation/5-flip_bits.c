#include "main.h"

/**
 * flip_bits - it counts the amount of bits that would be flipped
 * to get one number from another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of flipped bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int flipped_bits;
	int i;

	flipped_bits = n ^ m;
	count = 0;
	for (i = 63; i >= 0; i--)
	{
		if ((flipped_bits >>  i) &  1)
		{
			count += 1;
		}
	}
	return (count);
}

#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int.
 * @b: the string of binary
 *
 * Return: the integer if succesfull
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power;
	unsigned int value;
	unsigned int sum;
	const char *a;

	a = b;
	while (*b != '\0')
	{
		b++;
	}
	b--;
	sum = 0;
	value = 0;
	power = 0;
	while (b >= a)
	{
		if (*b != '1' &&  *b != '0')
			return (0);
		value = (*b - '0') * (1 << power);
		sum += value;
		b--;
		power++;
	}
	return (sum);
}

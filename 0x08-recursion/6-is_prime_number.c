#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to be checked
 *
 * Return: 1 if prime number. otherwise 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0)
		return (1);
	return (0);
}

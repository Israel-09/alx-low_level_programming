#include "main.h"

/**
 * _memset - a function that replaces n number of bytes of s with b.
 * @s: the string to be manipulated.
 * @b: the constant byte to fill n number of times.
 * @n: the number of bytes to fill b.
 *
 * Return: the pointer to dest location.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

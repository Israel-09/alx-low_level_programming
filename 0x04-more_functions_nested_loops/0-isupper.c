#include "main.h"

/**
 * _isupper - checks if a character us upper case.
 * @c: character to be tested
 *
 * Return: 1 if upper. Otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

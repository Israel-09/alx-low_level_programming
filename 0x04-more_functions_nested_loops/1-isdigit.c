#include "main.h"

/**
 * _isdigit - checks if a character is a digit.
 *
 * Return: 1 if upper. Otherwise 0.
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

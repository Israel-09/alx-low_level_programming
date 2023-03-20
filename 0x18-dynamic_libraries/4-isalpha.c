#include "main.h"

/**
 * _isalpha - checks if a character is a lower case alphabet
 * @c: parameter to be checked
 *
 * Return: 1 if c is lowercaser. otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

#include <unistd.h>

/**
 * _putchar - prints characters
 * @c - character
 *
 * Return: character inputed
 */
int _putchar(char c)
{
	return (write (1, &c,1));
}

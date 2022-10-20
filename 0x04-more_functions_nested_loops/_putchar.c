#include <unistd.h>

/**
 * _putchar - prints characters
 *
 * Return: the character;
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

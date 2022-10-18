#include <unistd.h>

/**
 * _putchar - prints value of a character
 * @c: is the parameter
 *
 * Return: the character to be printed
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

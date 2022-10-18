#include <unistd.h>

/**
 * _putchar - prints the character passsed in it
 * @c: the character to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

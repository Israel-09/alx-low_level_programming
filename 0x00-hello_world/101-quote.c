#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a messasge to stabdard error
 * Return: 0 if program is successull
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

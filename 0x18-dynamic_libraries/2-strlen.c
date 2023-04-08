#include "main.h"

/**
 * _strlen - determines the lenght of a string.
 * @s: the string lenght to be calculated.
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
		;

	return (i);
}

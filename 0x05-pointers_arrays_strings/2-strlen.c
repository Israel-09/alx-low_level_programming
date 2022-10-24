#include "main.h"

/*
 * _strlen - calculates the length of string input.
 * @s: the string lenght to be measured
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i;

	for(i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
	}
	return (i + 1);
}

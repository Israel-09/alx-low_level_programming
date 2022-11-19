#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - create the duplicate of an array
 * @str: the string to be duplicated.
 *
 * Return: the pointer to the new string on success otherwise NULL
 */
char *_strdup(char *str)
{
	int j;
	long unsigned int i;
	char *nstr;
	
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	nstr = malloc(sizeof(char) * j);
	if (nstr == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		nstr[i] = str[i];
	}
	str[i] = '\0';
	return (nstr);
}

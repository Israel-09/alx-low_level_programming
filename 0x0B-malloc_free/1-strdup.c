#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - create the duplicate of an array
 * @str: the string to be duplicated.
 *
 * Return: the pointer to the new string on success otherwise NULL
 */
char *_strdup(char *str)
{
	int len;
	int i;
	char *nstr;

	if (!str)
		return (NULL);
	len = strlen(str);
	nstr = malloc(sizeof(char) * (len + 1));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[i] = '\0';
	return (nstr);
}

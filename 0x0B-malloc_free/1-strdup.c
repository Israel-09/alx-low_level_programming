#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create the duplicate of an array
 * @str: the string to be duplicated.
 *
 * Return: the pointer to the new string on success otherwise NULL
 */
char *_strdup(char *str)
{
	int i;
	char *nstr;

	nstr = malloc(sizeof(str));
	if (nstr == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		nstr[i] = str[i];
	}
	nstr[i] = str[i];
	return (nstr);
}

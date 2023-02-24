#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @str: the string
 * Return: the lenght of a string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);

}

/**
 * _strcpy - copy string from a source to destination
 * @dest: the string to copy to
 * @src: the string to be copied from
 * @point: the amount of bytes already written to the dest
 *
 * Return: pointer to the updated dest string
 */
char *_strcpy(char *dest, char *src, int *point)
{
	int i, j;

	j = *point;
	if (src == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++, j++)
	{
		dest[j] = src[i];
		*point += 1;
	}
	dest[j] = '\n';
	*point += 1;
	return (dest);
}
/**
 * argstostr - concatenates all the arguement of a program
 * @av: the array of the arguements
 * @ac: the count of arguements
 * Return: a pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, lenght = 0, point = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; av[i] != NULL; i++)
	{
		lenght += _strlen(av[i]);
	}

	lenght += i;

	str = malloc(sizeof(char) * lenght);
	if (str == NULL)
		return (NULL);
	for (i = 0; av[i] != NULL; i++)
	{
		str = _strcpy(str, av[i], &point);
	}
	str[lenght] = '\0';

	return (str);
}

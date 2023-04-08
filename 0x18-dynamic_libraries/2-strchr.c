#include "main.h"

/**
 * _strchr - locates the chracter c in string s
 * @s: the string to be searched
 * @c: the chracter to be located
 *
 * Return: the location of c.
 */
char *_strchr(char *s, char c)
{
	s[0] = c;
	return (s);
}

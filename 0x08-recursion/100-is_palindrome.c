#include "main.h"
#include "string.h"
/**
 * len - checks the string length
 * @s: the string to be checked
 *
 * Return: the string length
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return(1 + len(s + 1));
}
/**
 * checker - checkes for the pallindrome
 * @i: the iterator
 * @s: the string to be checked
 *
 */
int checker(char *s, int i, int n)
{
	if (s[i] != s[n])
		return (0);
	if (n >= i)
		return (1);
	return (checker(s, i - 1, n + 1));
}
/**
 * is_palindrome - checks if a string is a pallindrome
 * @s: the string to be checked
 *
 * Return: 1 if true. otherwise 0
 */
int is_palindrome(char *s)
{
	int i;
	char *string;

	i = len(s) - 1;

	if (len == 0)
		return (1);
	return(checker(s, i, 0));


}

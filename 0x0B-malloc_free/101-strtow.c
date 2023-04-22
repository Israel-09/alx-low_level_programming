#include "main.h"

/**
 * word_count - counts the amount of words in a string
 * @str: the string
 * Return: the number of words in a string
 */
int word_count(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			continue;
		else
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
			{
				count += 1;
			}
		}
	}
	return (count);
}

/**
 * sslen - checks the lenght of each word
 * @s: the string to be checked
 * Return: the number of letters in a word
 */
int sslen(char *s)
{
	int i;

	for (i = 0; s[i] != ' '; i++)
	{
		if (s[i] == '\0')
			break;
	}
	return (i);
}

/**
 * strtow - breaks a string to words
 * @s: the string to  be broken
 * Return: an array of the words.
 * Otherwise NULL
 */
char **strtow(char *s)
{
	int i = 0, j, w_count = 0, k = 0;
	int w_len = 0;
	char **str;

	if (!s)
		return (NULL);
	w_count = word_count(s);
	str = malloc(sizeof(char *) * w_count + 1);
	printf("allocated %lu first\n", sizeof(char *) * w_count + 1);
	if (!str || w_count == 0)
		return (NULL);
	for (j = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			continue;
		if (w_len == 0)
		{
			w_len = sslen(s + i);
			str[k] = malloc(sizeof(char) * w_len + 1);
			printf("allocated %lu first\n", (sizeof(char) * (w_len + 1)));
		}
		if (str[k] == NULL)
			return (NULL);
		if (j == w_len)
		{
			str[k][j] = '\0';
			j = 0;
			k++;
			w_len = sslen(s + i);
			str[k] = malloc(sizeof(char) * w_len + 1);
			if (str[k] == NULL)
				return (NULL);
			printf("allocated %lu first\n", sizeof(char) * w_len + 1);
			str[k][j] = s[i];
			j++;
			continue;
		}
		str[k][j] = s[i];
		j++;
	}
	str[k + 1] = NULL;
	return (str);
}

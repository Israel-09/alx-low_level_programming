#include "main.h"

int _sstrlen(char *s)
{
	int i;

	for (i = 0; s[i] != ' ', s[i] != '\t', s[i] != '\0'; i++)
		;
	return (i);

}
int white_space(char *s)
{
	int i = 0;

	for(; s[i] == ' ', s[i] == '\t', s[i] == '\n'; i++)
	{
		if (s[i] == '\0')
			break;
	}
	return (i);
}

int copy_str(char *dest, char *s)
{
	int i;

	for (i = 0; s[i] != ' ', s[i] != '\t', s[i] != '\0'; i++)
	{
		dest[i] = s[i];
	}
	dest[i] = '\0';
	return (i);
}
/**
 * strtow - splits strings to words
 * @str: strings to be splited
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **s_arr;
	int i, str_count = 1, j;
	int index = 0;

	if (str == NULL)
		return (NULL);
	/*count of amount of words in a string*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			if (str[i + 1] == '\t' || str[i + 1] == ' ')
				str_count += 1;
		}
	}
	str_count += 1;/*count for the last null string*/
	s_arr = malloc(sizeof(char *) * str_count);
	if (s_arr == NULL)
		return (NULL);
	for (i = 0; i < str_count - 1; i++)
	{
		str += index;
		index += white_space(str);
		s_arr[i] = malloc(sizeof(char) * _sstrlen(str));
		if (s_arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(s_arr[j]);
			free(s_arr);
		}
		index += copy_str(s_arr[i], str);
	}
	s_arr[i] = NULL;

	printf("%d\n", str_count);
	return (s_arr);
}

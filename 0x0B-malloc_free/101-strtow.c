#include "main.h"

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

char **strtow(char *s)
{
	int i = 0, j, w_count = 0, k = 0;
	int w_len = 0;
	char **str;

	w_count = word_count(s);
	str = malloc(sizeof(char *) * w_count + 1);
	if (!str)
		return (NULL);

	for (j = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			continue;
		if (w_len == 0)
		{
			w_len = sslen(s + i);
			str[k] = malloc(sizeof(char) * w_len + 1);
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

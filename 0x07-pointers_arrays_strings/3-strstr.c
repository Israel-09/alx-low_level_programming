#include "main.c"

/**
 * _strstr - locates a substring in a a string.
 * @haystack: the main string to be checked.
 * @needle: the sub-strin to be found.
 *
 * Return: pointer to the begining of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, chk;
	
	j = 0;
	k = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		
		chk = 0;
		if (haystack[i] == needle[j])
		{
			for (k = i; needle[j] != '\0'; k++, j++)
			{
				if (haystack[k] == needle[j])
					chk += 1;
			}
		}
		if (chk == k - 1)
			return (haystack + i);
	}
	return (NULL);
}


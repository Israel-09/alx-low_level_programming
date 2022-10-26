#include "main.h"

/**
  * _strcpy - copies one string to another
  * @dest: destination where content is to be copied
  * @src: is the content to be copied
  *
  * Return: the address of dest
  */
char *_strcpy(char *dest, char *src)
{
	int i, len, j;
	
	for (len = 0;; len++)
	{
		if (src[len] == '\0')
			break;
	}
	
	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

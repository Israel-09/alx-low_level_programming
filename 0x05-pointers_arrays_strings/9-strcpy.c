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
	*dest += *src;
	return (dest);
}

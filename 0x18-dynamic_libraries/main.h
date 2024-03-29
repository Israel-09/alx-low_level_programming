#ifndef FILE_MAIN
#define FILE_MAIN

#include <stdlib.h>

int _isupper(int c);
int _isdigit(int c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strncat(char *dest, char *src, int n);
int _atoi(char *s);
char *_strchr(char *s, char c);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
int _islower(int c);
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strcat(char *dest, char *src);
int _isalpha(int c);
char *_strpbrk(char *s, char *accept);
int _abs(int n);
char *_strcpy(char *dest, char *src);
int _putchar(char c);
void _puts(char *s);

#endif

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void){

	char s0[30] = "Bob Dylan";
	char s1[30] = "yla";
	char *ptr;

	ptr = strstr(s0, s1);
	printf("%s, %s\n", s0, ptr);
 	return (0);
}

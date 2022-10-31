#include "main.h"

int main(void)
{
	char name[20] = "Inene israel";
/*	char name1[20] = "favour"; */
	char *ptr;
	
	ptr = _strchr(name, '\0');
	printf("The value of name is %s\n", ptr); 
	ptr = _strchr(name, '\n');
	printf("The value of ptr is %s\n", ptr);
	return (0);
}

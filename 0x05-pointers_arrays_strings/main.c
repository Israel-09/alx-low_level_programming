#include <stdio.h>
#include  "main.h"

int main(void)
{
	char s[30] = "el34lo l-575632";
	char *ptr = "home";
	char *h;

	h =_strcpy(s , ptr);
	printf("the string is %s\n", h);

	return (0);
}

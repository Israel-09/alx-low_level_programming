#include <stdio.h>
#include  "main.h"

int main(void)
{
	char s[30] = "el34lo l-575632";
	char *ptr = "home";
	int i =_atoi(s);
	printf("The value of the integer is: %d\n", i);
	printf("The negative test: %d\n", _atoi("afadsfsds-76"));


	return (0);
}

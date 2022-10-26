#include "main.h"

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	ptr = _strcat(s1, s2);
	printf("%s\n", ptr);
	printf("%s\n", s1);
	return (0);
}

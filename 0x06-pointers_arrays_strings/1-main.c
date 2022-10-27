#include "main.h"

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	ptr = _strncpy(s1, s2, 2);
//	char *ptr1 = _strncat("i love ", "my Jesus", 5);
	printf("%s\n", ptr);
	printf("%s\n", ptr);
	return (0);
}

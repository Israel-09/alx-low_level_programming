#include "main.h"

int main(void)
{
	char s1[98] = "Hel\0lo";
	char s2[] = "i am th\ne God of ";
	char *ptr;

	ptr = _strcat(s1, s2);
	printf("%s\n", ptr);
	printf("%s\n", s1);
	return (0);
}

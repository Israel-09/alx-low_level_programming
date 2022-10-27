#include "main.h"

int main(void)
{
/*	int  a[5] = {4, 5, 6, 7, 8}, i;
	int n = 5;
	reverse_array(a, n);
	for (i = 0; i < n; i++)
	{
		putchar(a[3] + '0');
	}
	putchar('\n');
	*/
	char f[] = "THE boy is Naughty";
	char *ptr;
	ptr = string_toupper(f);
	printf("%s\n", ptr);
	printf("%s\n", f);
	printf("%s\n", ptr);
	return (0);
}

#include "main.h"

int main(void)
{
	int n =5;
	int  a[5] = {4, 5, 6, 7, 8}, i;
	reverse_array(a, n);
	for (i = 0; i < n; i++)
	{
		putchar(a[i] + '0');
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

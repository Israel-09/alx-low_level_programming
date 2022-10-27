#include "main.h"
#include <string.h>

int main(void)
{
	int a[] = {2, 4, 5, 8, 10, 56};
	int i;

	reverse_array(a, 6);
	for (i = 0; i < 6; i++)
	{
		printf("\n%d, ", a[i]);
	}	
	return (0);
}

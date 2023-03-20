#include "main.h"
#include <stdio.h>

int main()
{
	int i = '9';

	if (_isdigit(i) == 1)
	{
		printf("i is a digit\n");
	}
	else
		printf("i is not a digit\n");
	return (0);
}

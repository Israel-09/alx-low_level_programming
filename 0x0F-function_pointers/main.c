#include "function_pointers.h"
#include <stdio.h>

int is_98(int elem)
{
	return (456 == elem);
}
int is_pos(int elem)
{
	return (elem > 0);
}
int main(void)
{
	int array[5] = {9, -98, -98, 98, 23};
	int index;

	index = int_index(array, 5, is_98);
	printf("%d\n", index);
	index = int_index(array, 5, is_pos);
	printf("%d\n", index);
	return (0);
}


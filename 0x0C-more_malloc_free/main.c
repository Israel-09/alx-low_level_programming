#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char *buff, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x - %c", buff[i], buff[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * 10);
	p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
	i = 0;
	while (i < 98)
	{
		p[i++] = 98;
	}
	print(p, 98);
	free(p);
	return (0);
}

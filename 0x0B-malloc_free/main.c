#include "main.h"

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; i++)
	{
		printf("%s\n", tab[i]);
	}
}
int main(void)
{
	char **tab;

	tab = strtow("      ALX School #cisfun	");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
/*	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);*/
	return (0);
}

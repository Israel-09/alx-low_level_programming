#include "main.h"

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; i++)
	{
		printf("%s\n", tab[i]);
	}
}
int main(int ac, char **av)
{
	char **tab;
	int i;

	tab = strtow("      ALX School #cisfun	");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	while (*tab)
	{
		free(*tab);
		tab++;
	}
	free(tab);
	return (0);
}

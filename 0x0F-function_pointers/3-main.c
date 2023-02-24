#include "3-calc.h"

/**
 * main - entry point
 * @ac: the number of command line arguements
 * @av: pointer to the arguements
 *
 * Return: 0 on success otherwise error value
 */
int main(int ac, char **av)
{
	int a, b;
	int (*op_func)(int, int);

	if (ac != 4)
	{
		puts("Error");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);

	op_func = get_op_func(av[2]);
	if (op_func == NULL)
	{
		puts("Error");
		exit(99);
	}
	if ((op_func == op_div || op_func == op_mod) && b == 0)
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", op_func(a, b));
	return (0);
}


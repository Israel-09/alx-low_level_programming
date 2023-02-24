#include "main.h"

int main(int ac, char **av)
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
		return (1);
	printf("%s\n", s);
	free(s);
	return (0);
}


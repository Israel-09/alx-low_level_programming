#include "main.h"

int main(int argc, char **av)
{
	ssize_t num_words;

	if (argc != 2)
		return (1);
	num_words = read_textfile(av[1], 144);
	printf("\n%li words printed\n", num_words);
	return (0);
}

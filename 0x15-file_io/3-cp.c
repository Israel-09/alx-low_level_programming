#include "main.h"

/**
 * copy_ft - the content of a file to another
 * @fd: array of the two file's fd
 * @av: array of array of the two filename
 *
 * Return: on success 0. otherwise 98 or 99
 */
int copy_ft(int *fd, char **av)
{
	char *buff;
	ssize_t r_chk = 1024, w_chk;

	while (r_chk == 1024)
	{
		buff = malloc(sizeof(char) * 1024);
		r_chk = read(fd[0], buff, 1024);
		if (r_chk == -1)
		{
			fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
			return (98);
		}
		w_chk = write(fd[1], buff, 1024);
		if (w_chk == -1)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", av[2]);
			return (99);
		}
		free(buff);
	}
	return (0);
}

/**
 * main - entry point
 * @ac: arguements count.
 * @av: arguments vector
 *
 * Return: always 0.
 */
int main(int ac, char **av)
{
	int fd[2];
	int exit_status;

	(void)av;
	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd[0] = open(av[1], O_RDONLY);
	if (fd[0] == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}

	fd[1] = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	if (fd[1] == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
		return (99);
	}
	exit_status = copy_ft(fd, av);
	if (close(fd[0]) == -1)
		return (100);
	if (close(fd[1]) == -1)
		return (100);
	return (exit_status);
}

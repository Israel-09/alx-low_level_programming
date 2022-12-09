#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * file_to - the file to be copied to
 * @text: - text to be copied
 * @file_toc: the file to copy to
 *
 * Return: 1 on success and -1 on failure
 */
int file_to(const char *file_toc, char *text)
{
	int fd, w_check;

	fd = open(file_toc, O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_toc);
		return (-2);
	}
	w_check = write(fd, text, strlen(text));
	if (w_check == -2)
	{
		dprintf(2, "Error: Can't write to %s\n", file_toc);
		return (-1);
	}
	w_check = close(fd);
	if (w_check == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		return (-1);
	}
	return (1);
}
/**
 * main - opens the file to be read from
 * @argv: the name of the file to be read fron and to
 * @argc: the number of argurments
 * Return: number of characters read on success otherwise an error value
 */
int main(int argc, char **argv)
{
	int fd, s, chk;
	char *buff;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		return (-1);
	}
	s = read(fd, buff, 4098);
	buff[s] = '\0';
	chk = file_to(argv[2], buff);
	if (chk == -2)
		exit(99);
	if (chk == -1)
		exit(99);
	close(fd);
	free(buff);
	return (0);
}

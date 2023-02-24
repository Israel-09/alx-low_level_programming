#include "main.h"

/**
 * read_textfile - this reads a textfile and prints its content
 * @filename: the name of the file to be read
 * @letters: amount of characters to be read frkm the file.
 * Return: the numbers of character printed if successfull otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_write;
	char *buff;

	if (filename == NULL)
	{
		printf("NO FILENAME \n");
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	num_read = read(fd, buff, letters);
	if (num_read == -1)
	{
		free(buff);
		return (0);
	}
	num_write = write(STDOUT_FILENO, buff, num_read);
	if ((num_write == -1) || (num_write != num_read))
	{
		free(buff);
		return (0);
	}
	close(fd);
	return (num_write);

}

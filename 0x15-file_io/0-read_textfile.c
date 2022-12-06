#include "main.h"
#include <string.h>

/**
 * read_textfile - reads the content of a trxt file int same dire tory
 * @filename: the name of yhe file
 * @letters: amount of letters to be read
 *
 * Return: the amount of lrtters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t s;
	int fd,w_chk;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	s = read(fd, buff, letters);
	buff[s] = '\0';
	close(fd);
	w_chk = write(1, buff, strlen(buff));
	free(buff);
	if (w_chk == -1)
		return (0);
	return (s);
}

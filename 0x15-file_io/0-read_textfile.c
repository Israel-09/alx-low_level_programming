#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads the content of a trxt file int same dire tory
 * @filename; the name of yhe file
 * @letters: amount of letters to be read
 *
 * Return: the amount of lrtters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t p_char, s;

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
	p_char = printf("%s\n", buff);
	free(buff);
	return (s);
}

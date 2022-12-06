#include "main.h"
#include <string.h>

/**
 * create_file - is a function that creats a new file.
 * @filename: is the name of the file to be created
 * @text_content: the content of the created file
 *
 * Return: on success returns 1. otherwise return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_check;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY, 0600);
	if (fd != -1)
	{
		ftruncate(fd, 0);
		w_check = write(fd, text_content, strlen(text_content));
		if (w_check == -1)
			return (-1);
	}
	else
	{
		fd = creat(filename, 0600);

		if (fd == -1)
			return (-1);
		if (text_content)
		{
			w_check = write(fd, text_content, strlen(text_content));
			if (w_check == -1)
				return (-1);
		}
	}
	close(fd);
	return (1);
}

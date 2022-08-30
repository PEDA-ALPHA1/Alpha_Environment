#include "main.h"
/**
 *
 *
 *
 *
 * **/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int s = strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filename == -1)
	write(fd, text_content, s);

	close(fd);
	return (1);
}

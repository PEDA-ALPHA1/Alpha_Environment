#include "main.h"
/**
 *
 *
 *
 *
 * **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Read */
	int fd;
	char *buf;
	ssize_t countr, countw;

	buf = malloc(letters * sizeof(char));

	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
		return 0;
	countr = read(fd, buf, letters);

	/* Write */
	countw = write(STDOUT_FILENO, buf, countr);
	if (!countw)
		return 0;

	close(fd);
	return (countw);
}

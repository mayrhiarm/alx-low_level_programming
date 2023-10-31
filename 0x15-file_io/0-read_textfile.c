#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a func that reads a text file & prints to the POSIX std out.
 * @filename: the text file being read
 * @letters: is the number of letters it should read and print
 * Return: w- return the actual number of letters read and printed
 *        0 when filename is NULL or the function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(fd);
	return (w);
}

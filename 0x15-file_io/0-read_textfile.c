#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints STDOUT.
 * @filename: text file
 * @letters: number of letters printed
 * Return: the actual number of letters it could read and print
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t z;
	ssize_t m;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	m = read(fd, buf, letters);
	z = write(STDOUT_FILENO, buf, m);

	free(buf);
	close(fd);
	return (z);
}

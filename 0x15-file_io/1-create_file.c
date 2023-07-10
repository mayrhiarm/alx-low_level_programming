#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: if filename is NULL return -1,
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int m, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	m = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(m, text_content, length);

	if (m == -1 || w == -1)
		return (-1);

	close(m);

	return (1);
}

#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, u, f = 0;

	if (!filename)
		return (-1);

	p = open(filename, O_WRONLY | O_APPEND);

	if (p == -1)
		return (-1);

	if (text_content)
	{
		for (f = 0; text_content[f]; f++)
			;

		u = write(p, text_content, f);

		if (u == -1)
			return (-1);
	}

	close(p);

	return (1);
}

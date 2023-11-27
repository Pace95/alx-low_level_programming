#include "main.h"
/**
 * append_text_to_file - function that appends text to the end of a file
 * @filename: name of file
 * @text_content:NULL terminated string at the of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nol;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

		if (fd == -1)
			return (-1);
	if (text_content != NULL)
	{
		for (nol = 0; text_content[nol]; nol++)
			;
		rwr = write(fd, text_content, nol);

		if (rwr == -1)
			return (-1);
	}
	close(fd);
		return (1);
}

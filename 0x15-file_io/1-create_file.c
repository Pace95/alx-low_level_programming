#include "main.h"
/**
 * create_file - a function that create a file
 * @filename: name of file to be created
 * @text_content: NULL terminatedstring to write to the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nol;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);
	if (text_context == NULL)
		text_content = "";
	for (nol = 0; text_content[nol]; nol++)
		;
	rwr = write(fd, text_content, nol);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}

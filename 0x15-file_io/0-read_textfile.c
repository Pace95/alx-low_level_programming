#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: filename string pointer
 * @letters: number of letters it can read and print
 * Return: number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nor, now;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	nor = read(fd, buff, letters);
	now = write(STDOUT_FILENO, buff, nor);
	close(fd);
	free(buff);
	return (now);
}

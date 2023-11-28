#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of the file
 * @letters: letters printed
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read, write;
	char *x;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	x = malloc(sizeof(char) * (letters));
	if (!x)
		return (0);

	read = read(fd, x, letters);
	write = write(STDOUT_FILENO, x, read);

	close(fd);

	free(x);

	return (write);
}

#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file
 * @text_content: content written in the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x;
	int n;
	int rights;

	if (!filename)
		return (-1);

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (x == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	rights = write(x, text_content, n);

	if (rights == -1)
		return (-1);

	close(x);

	return (1);
}

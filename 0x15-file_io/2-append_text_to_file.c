#include "main.h"

/**
 * append_text_to_file - function that appends text
 * at the end of a file
 * @filename: name of the file
 * @text_content: new content
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int n;
	int rights;

	if (!filename)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);

	if (x == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		rights = write(x, text_content, n);

		if (rights == -1)
			return (-1);
	}

	close(x);

	return (1);
}

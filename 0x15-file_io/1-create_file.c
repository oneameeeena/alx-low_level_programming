#include "main.h"

/**
 * create_file - func to creat a file
 * @filename: filename.
 * @text_content: content to write.
 *
 * Return: 1 success or -1 if fais
 */
int create_file(const char *filename, char *text_content)
{
	int fl;
	int letters;
	int rw;

	if (!filename)
		return (-1);

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fl == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	rw = write(fl, text_content, letters);

	if (rw == -1)
		return (-1);

	close(fl);

	return (1);
}

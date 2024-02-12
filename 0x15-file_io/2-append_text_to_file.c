#include "main.h"
/**
 * append_text_to_file - appends text at EOF
 * @filename: filename.
 * @text_content: new content to add.
 *
 * Return: 1 if exists. -1 if does not exist or fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	int letters;
	int rw;

	if (!filename)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		rw = write(fl, text_content, letters);

		if (rw == -1)
			return (-1);
	}

	close(fl);

	return (1);
}

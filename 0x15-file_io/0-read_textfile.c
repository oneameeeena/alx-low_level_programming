#include "main.h"

/**
 * read_textfile - func to read a file
 * @filename: filename.
 * @letters: numbers of letters .
 *
 * Return: numbers of letters 0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	ssize_t r, w;
	char *buff;

	if (!filename)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	r = read(fl, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	close(fl);

	free(buff);

	return (w);
}

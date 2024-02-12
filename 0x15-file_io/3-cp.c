#include "main.h"

/**
 * filError - checks if files can be opened.
 * @src: file source.
 * @dist: distination.
 * @argv: arguments v.
 * Return: void.
 */
void filError(int src, int dist, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dist == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main func.
 * @argc: count of arguments.
 * @argv: arguments v.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src, dist, err_close;
	ssize_t letters, wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dist = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	filError(src, dist, argv);

	letters = 1024;
	while (letters == 1024)
	{
		letters = read(src, buff, 1024);
		if (letters == -1)
			filError(-1, 0, argv);
		wr = write(dist, buff, letters);
		if (wr == -1)
			filError(0, -1, argv);
	}

	err_close = close(src);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	err_close = close(dist);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	return (0);
}

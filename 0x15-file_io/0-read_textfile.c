#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the name of the text file
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters read and printed, or -1 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff;

	if (!filename)
	return (-1);

	fd = open(filename, O_RDONLY);
		if (fd == -1)
		return (-1);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		return (-1);
	}

	readed = read(fd, buff, letters);
	if (readed == -1)
	{
		free(buff);
		close(fd);
		return (-1);
	}

	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}


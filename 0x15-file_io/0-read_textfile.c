#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the address of the text file
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	readed = read(fd, buff, letters);
	if (readed == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	if (write(STDOUT_FILENO, buff, readed) != readed)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (readed);
}


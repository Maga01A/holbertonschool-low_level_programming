#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: pointer
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fptr;
	ssize_t r, wr, fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fptr = malloc(sizeof(ssize_t) * letters);
	if (fptr == NULL)
		return (0);

	r = read(fd, fptr, letters);

	wr = write(STDOUT_FILENO, fptr, r);

	if (wr == -1)
		return (0);

	free(fptr);
	close(fd);
	return (wr);
}

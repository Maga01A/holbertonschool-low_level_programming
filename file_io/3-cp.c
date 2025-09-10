#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
/**
 * print_error_and_exit - Yazilmis error mesaji ile cixis edir
 * @code: cixis codu
 * @msg: error mesaj
 * @arg: fayl adÄ±e ya fd string
 */
void print_error_and_exit(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}
/**
 * main - FaylÄ± basqa fayla kopyal
 * @argc: arqument sayÄ
 * @argv: arqument massiv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while (1)
	{
		r_bytes = read(fd_from, buffer, BUFFER_SIZE);
		if (r_bytes == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
		}
		if (r_bytes == 0)
			break;

		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", argv[1]);

	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", argv[2]);

	return (0);
}

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_exit_str - Prints an error message with a string argument and exits.
 * @code: Exit code.
 * @message: Error message format string.
 * @arg: String argument for the format.
 */
static void error_exit_str(int code, const char *message, const char *arg)
{
    dprintf(STDERR_FILENO, message, arg);
    exit(code);
}

/**
 * error_exit_fd - Prints an error message with a file descriptor and exits.
 * @code: Exit code.
 * @message: Error message format string.
 * @fd: File descriptor to insert into the message.
 */
static void error_exit_fd(int code, const char *message, int fd)
{
    dprintf(STDERR_FILENO, message, fd);
    exit(code);
}

/**
 * main - Copies the content of one file to another.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exits with relevant code on error.
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written, total_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error_exit_str(97, "Usage: cp file_from file_to\n", "");

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit_str(98, "Error: Can't read from file %s\n", argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        error_exit_str(99, "Error: Can't write to %s\n", argv[2]);
    }

    while (1)
    {
        bytes_read = read(fd_from, buffer, BUFFER_SIZE);
        if (bytes_read == -1)
        {
            close(fd_from);
            close(fd_to);
            error_exit_str(98, "Error: Can't read from file %s\n", argv[1]);
        }
        if (bytes_read == 0) /* EOF */
            break;

        total_written = 0;
        while (total_written < bytes_read)
        {
            bytes_written = write(fd_to, buffer + total_written,
                                  bytes_read - total_written);
            if (bytes_written == -1)
            {
                close(fd_from);
                close(fd_to);
                error_exit_str(99, "Error: Can't write to %s\n", argv[2]);
            }
            total_written += bytes_written;
        }
    }

    if (close(fd_from) == -1)
        error_exit_fd(100, "Error: Can't close fd %d\n", fd_from);
    if (close(fd_to) == -1)
        error_exit_fd(100, "Error: Can't close fd %d\n", fd_to);

    return (0);
}


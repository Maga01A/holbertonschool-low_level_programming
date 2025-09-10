#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: pointer
 * @text_content:  terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, w, fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
	}
	else
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}

#include <unistd.h>
/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}


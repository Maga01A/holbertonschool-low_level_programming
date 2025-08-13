#include <unistd.h>
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to print
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		write(1, &s[i], 1);

	write(1, "\n", 1);
}


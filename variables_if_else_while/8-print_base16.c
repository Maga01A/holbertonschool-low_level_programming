#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* print '0' through '9' */
	for (c = '0'; c <= '9'; c++)
		putchar(c);

	/* print 'a' through 'f' */
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	/* trailing newline */
	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string to print
 *
 * Description: Recursively prints each character of the string
 *              using _putchar, then prints a newline.
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('
');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

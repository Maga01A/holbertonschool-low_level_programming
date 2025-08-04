#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * 
 * Description: Prints all lowercase letters from 'a' to 'z' followed by a new line
 * using only two putchar calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}

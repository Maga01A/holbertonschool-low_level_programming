#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Description: Prints number pairs from 00 01 to 98 99 in ascending order
 *              with proper formatting. Each number is printed as two digits
 *              (e.g., 1 becomes 01). Pairs are separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

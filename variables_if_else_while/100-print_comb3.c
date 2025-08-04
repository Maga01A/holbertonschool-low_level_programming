#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits
 *
 * Description: Prints combinations of two distinct digits (i, j)
 * in ascending order where i < j. The smallest combination is 01
 * and the largest is 89. Each combination is printed as two digits
 * separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

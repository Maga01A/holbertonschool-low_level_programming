#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits
 *
 * Description: Prints combinations of three distinct digits (i, j, k)
 * in ascending order where i < j < k. The smallest combination is 012
 * and the largest is 789. Each combination is printed as three digits
 * separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

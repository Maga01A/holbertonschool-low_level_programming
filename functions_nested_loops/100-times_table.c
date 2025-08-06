#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the size of the times table
 *
 * Description: If n is less than 0 or greater than 15, prints nothing.
 */
void print_times_table(int n)
{
	int row, col, val;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			val = row * col;

			if (col == 0)
				_putchar('0' + val);
			else
			{
				_putchar(',');
				_putchar(' ');

				if (val < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + val);
				}
				else if (val < 100)
				{
					_putchar(' ');
					_putchar('0' + (val / 10));
					_putchar('0' + (val % 10));
				}
				else
				{
					_putchar('0' + (val / 100));
					_putchar('0' + ((val / 10) % 10));
					_putchar('0' + (val % 10));
				}
			}
		}
		_putchar('\n');
	}
}

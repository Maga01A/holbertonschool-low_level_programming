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

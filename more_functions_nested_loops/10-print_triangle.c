#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of '#' characters
 * @size: height (and base width) of the triangle
 *
 * If size is 0 or less, only a newline is printed.
 */
void print_triangle(int size)
{
    int row, col;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (row = 1; row <= size; row++)
    {
        for (col = size - row; col > 0; col--)
            _putchar(' ');
        for (col = 0; col < row; col++)
            _putchar('#');
        _putchar('\n');
    }
}

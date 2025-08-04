#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n < 10)
    {
        putchar(n + '0');        // print digit
        if (n != 9)
        {
            putchar(',');        // print comma
            putchar(' ');        // print space
        }
        n++;
    }
    putchar('\n');              // newline
    return (0);
}


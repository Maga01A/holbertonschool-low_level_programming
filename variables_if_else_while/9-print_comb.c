#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n < 10)
    {
        putchar(n + '0');           // 1st putchar: print digit
        if (n != 9)
        {
            putchar(',');           // 2nd putchar: print comma
            putchar(' ');           // 3rd putchar: print space
        }
        n++;
    }
    putchar('\n');                  // 4th putchar: print newline
    return (0);
}


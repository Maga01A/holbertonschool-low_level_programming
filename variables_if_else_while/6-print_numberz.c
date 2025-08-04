#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n < 10)
        putchar('0' + n++);

    putchar('\n');
    return (0);
}


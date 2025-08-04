#include <stdio.h>

int main(void)
{
    int n;

    for (n = 0; n < 10; n++)
        putchar(n + '0');
    putchar('
');

    return (0);
}

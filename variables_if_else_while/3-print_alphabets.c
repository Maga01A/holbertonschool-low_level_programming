#include <stdio.h>

int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
        putchar(c);
    for (c = 'A'; c <= 'Z'; c++)
        putchar(c);
    putchar('
');

    return (0);
}

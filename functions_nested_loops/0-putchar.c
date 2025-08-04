#include "main.h"

int main(void)
{
    char str[] = "_putchar";
    int i = 0;

    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }
    _putchar(10);
    return (0);
}

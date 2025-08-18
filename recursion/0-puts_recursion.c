#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
    if (*s == 0)   //stringin sonuna gelende funksiyani bitirir.
    {
        _putchar('\n');
        return;
    }

    _putchar(*s); //stringin ilk karakterini yazdirir.
    _puts_recursion(s + 1); //stringin novbeti karakterlerini yazdirir.
}

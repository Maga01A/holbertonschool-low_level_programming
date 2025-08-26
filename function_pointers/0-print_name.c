#include <stddef.h>            /* NULL üçün */
#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: name string to print
 * @f: pointer to a function that takes a char* and returns nothing
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;

    f(name);
}


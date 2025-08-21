#include <stdlib.h>

/**
 * malloc_checked - yaddaş ayıran funksiya
 * @b: ayrılacaq yaddaşın byte ölçüsü
 *
 * Return: ayrılmış yaddaşın pointeri
 *         malloc uğursuz olsa, proqram 98 ilə çıxır
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
        exit(98);

    return (ptr);
}

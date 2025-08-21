#include <stdlib.h>
#include "main.h"

/**
 * _calloc - array üçün yaddaş ayırır və sıfırlayır
 * @nmemb: element sayı
 * @size: hər elementin ölçüsü (byte)
 *
 * Return: pointer (malloc ilə ayrılır), NULL əgər uğursuz olsa
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	/* Yaddaşı sıfırlayırıq */
	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}


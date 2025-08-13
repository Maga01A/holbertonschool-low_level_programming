#include "main.h"
/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to append
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}


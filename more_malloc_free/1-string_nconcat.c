#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - iki stringi birləşdirir
 * @s1: birinci string
 * @s2: ikinci string
 * @n: s2-dən götürüləcək simvolların sayı
 *
 * Return: yeni string pointeri (malloc ilə ayrılır), NULL əgər uğursuz olsa
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, j, len1 = 0, len2 = 0;
    char *result;

    if (!s1) s1 = "";
    if (!s2) s2 = "";

    while (s1[len1]) len1++;
    while (s2[len2]) len2++;

    if (n > len2) n = len2;

    result = malloc(len1 + n + 1);
    if (!result) return NULL;

    for (i = 0; i < len1; i++) result[i] = s1[i];
    for (j = 0; j < n; j++) result[i + j] = s2[j];
    result[i + j] = '\0';

    return result;
}


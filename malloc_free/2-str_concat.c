#include <stdlib.h>

/**
 * str_concat - iki string’i birleştirip yeni bir string döndürür
 * @s1: birinci string
 * @s2: ikinci string
 *
 * Return: malloc ile oluşturulmuş yeni string, NULL başarısızlıkta
 *         Eğer s1 veya s2 NULL ise boş string olarak kabul edilir
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1, len2;

	/* NULL kontrolü */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* s1 ve s2 uzunluklarını bul */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* Bellekte yer ayır, +1 '\0' için */
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* s1 karakterlerini kopyala */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* s2 karakterlerini kopyala */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	/* Null terminator ekle */
	concat[len1 + len2] = '\0';

	return (concat);
}


#include <stdlib.h>

/**
 * _strdup - verilen string’in kopyasını oluşturan fonksiyon
 * @str: kopyalanacak string
 *
 * Return: string kopyasının pointer’ı,
 *         NULL eğer str = NULL veya malloc başarısız olursa
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	/* String uzunluğunu bul */
	len = 0;
	while (str[len] != '\0')
		len++;

	/* Bellekte yer ayır, +1 '\0' için */
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	/* String’i kopyala */
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}

	/* Null terminator ekle */
	dup[len] = '\0';

	return (dup);
}


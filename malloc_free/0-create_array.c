#include <stdlib.h> /* malloc ve NULL için gerekli */

/**
 * create_array - verilen boyutta bir dizi oluşturur ve
 *                içini verilen karakter ile doldurur
 * @size: dizinin boyutu (kaç eleman olacağı)
 * @c: diziyi doldurmak için kullanılacak karakter
 *
 * Return: diziye pointer, NULL eğer size = 0 veya malloc başarısız olursa
 */
char *create_array(unsigned int size, char c)
{
	char *array; /* malloc ile oluşturulan dizinin adresini tutacak pointer */
	unsigned int i; /* for döngüsünde sayaç olarak kullanılacak değişken */

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}


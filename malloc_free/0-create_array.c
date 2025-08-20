#include <stdlib.h>  /* malloc ve NULL için gerekli */

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
    char *array;        /* malloc ile oluşturulan dizinin adresini tutacak pointer */
    unsigned int i;     /* for döngüsünde sayaç olarak kullanılacak değişken */

    /* Eğer size = 0 ise, dizi oluşturmak mantıksız -> NULL döndür */
    if (size == 0)
        return (NULL);

    /* malloc ile bellekten 'size' adet char için yer ayırıyoruz */
    array = malloc(size * sizeof(char));

    /* malloc başarısız olursa (yeterli bellek yoksa) -> NULL döndür */
    if (array == NULL)
        return (NULL);

    /* Döngü ile tüm diziyi verilen karakter 'c' ile doldur */
    for (i = 0; i < size; i++)
    {
        array[i] = c;  /* her elemanı 'c' yap */
    }

    /* Dizinin başlangıç adresini (pointer) döndür */
    return (array);
}


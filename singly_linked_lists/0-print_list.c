#include <stdio.h>   /* printf kullanmak için */
#include "lists.h"   /* list_t yapısını ve fonksiyon prototipini almak için */

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the first node of the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;  /* Node sayısını tutmak için sayaç */

    /* Listeyi baştan sona dolaş */
    while (h != NULL)
    {
        /* Eğer str NULL ise özel bir çıktı ver */
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        h = h->next;   /* Bir sonraki node’a geç */
        count++;       /* Sayaç artır */
    }

    return (count);    /* Toplam node sayısını döndür */
}


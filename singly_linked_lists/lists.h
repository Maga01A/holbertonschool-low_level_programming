#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>  /* size_t tipini kullanmak için */

/**
 * struct list_s - singly linked list yapısı
 * @str: node’un içindeki string
 * @len: string uzunluğu
 * @next: bir sonraki node’a pointer
 *
 * Description: Tek yönlü bağlı liste (singly linked list)
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Fonksiyon prototipi */
size_t print_list(const list_t *h);

#endif /* LISTS_H */


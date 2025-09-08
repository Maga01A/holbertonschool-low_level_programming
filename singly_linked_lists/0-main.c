#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - test kodu
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;

    /* Yeni bir node oluştur */
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }

    new->str = strdup("Hello"); /* "Hello" stringini kopyala */
    new->len = 5;               /* Uzunluk */
    new->next = head;           /* Hello -> World bağlantısı */
    head = new;                 /* Head artık "Hello"yu gösteriyor */

    n = print_list(head);       /* Listeyi yazdır */
    printf("-> %lu elements\n", n);

    printf("\n");

    free(new->str);  /* "Hello" stringini serbest bırak */
    new->str = NULL; /* str’yi NULL yap */
    n = print_list(head);  /* Tekrar yazdır */
    printf("-> %lu elements\n", n);

    free(new);  /* Node’un kendisini serbest bırak */
    return (0);
}


#ifndef DOG_H
#define DOG_H

#include <stddef.h>  /* NULL tanımı için */

/**
 * struct dog - köpek yapısı
 * @name: köpeğin adı
 * @age: köpeğin yaşı
 * @owner: sahibinin adı
 *
 * Açıklama: Bu struct bir köpeği temsil etmek için kullanılır.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};


/* typedef ile struct dog için yeni isim dog_t oluşturuldu */
typedef struct dog dog_t;
/* init_dog fonksiyon prototipi */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* print_dog fonksiyon prototipi */
void print_dog(struct dog *d);
#endif /* DOG_H */


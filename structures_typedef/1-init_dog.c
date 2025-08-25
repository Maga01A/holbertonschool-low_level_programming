#include "dog.h"       // struct dog tanımını kullanabilmek için başlık dosyasını dahil ediyoruz

/**
 * init_dog - bir struct dog değişkenini başlatır
 * @d: başlatılacak struct dog işaretçisi
 * @name: köpeğin adı
 * @age: köpeğin yaşı
 * @owner: köpeğin sahibi
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)        // Eğer gelen işaretçi NULL ise, yani geçerli bir struct yoksa
        return;           // fonksiyondan çıkıyoruz, işlem yapmıyoruz

    d->name = name;       // struct içindeki 'name' alanını verilen isimle başlatıyoruz
    d->age = age;         // struct içindeki 'age' alanını verilen yaş ile başlatıyoruz
    d->owner = owner;     // struct içindeki 'owner' alanını verilen sahip adı ile başlatıyoruz
}


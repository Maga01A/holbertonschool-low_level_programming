#include "dog.h"   /* struct dog ve prototip için başlık dosya
		     * sı dahil edildi
		    */
#include <stddef.h> /* NULL tanımı için */

/**
 * init_dog - bir struct dog değişkenini başlatır
 * @d: başlatılacak struct dog işaretçisi
 * @name: köpeğin adı
 * @age: köpeğin yaşı
 * @owner: köpeğin sahibi
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* Eğer gelen işaretçi NULL ise fonksiyondan çık */
		return;

	d->name = name;   /* Köpeğin adını struct içine ata */
	d->age = age;     /* Köpeğin yaşını struct içine ata */
	d->owner = owner; /* Köpeğin sahibini struct içine ata */
}


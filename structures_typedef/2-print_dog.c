#include <stdio.h>    /* printf kullanabilmek için */
#include "dog.h"      /* struct dog tanımı ve prototip için */

/**
 * print_dog - bir struct dog de~_i~_kenini ekrana yazdırır
 * @d: yazdırılacak struct dog i~_aretçisi
 *
 * E~_er d NULL ise hiçbir ~_ey yazdırmaz.
 * E~_er bir eleman NULL ise (nil) yazdırır.
 */
void print_dog(struct dog *d)
{
	if (d == NULL) /* Eğer struct işaretçisi NULL ise */
		return;    /* fonksiyondan çık, hiçbir şey yazdırma */

	/* Name alanını yazdır, eğer NULL ise (nil) yaz */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* Age alanını yazdır, float her zaman yazdırılır */
	printf("Age: %f\n", d->age);

	/* Owner alanını yazdır, eğer NULL ise (nil) yaz */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}


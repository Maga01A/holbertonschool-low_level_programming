#include <stdlib.h>  /* free için */
#include "dog.h"     /* struct dog ve prototipler için */

/**
 * free_dog - Dinamik olarak oluşturulmuş bir dog_t'yi ve içindeki kopyaları
 * serbest bırakır
 * @d: Serbest bırakılacak dog_t işaretçisi
 */
void free_dog(dog_t *d)
{
	if (d == NULL)      /* Eğer dog_t işaretçisi NULL ise */
		return;         /* hiçbir şey yapma */

	if (d->name != NULL)  /* name alanı NULL değilse */
		free(d->name);   /* name için ayrılmış hafızayı serbest bırak */

	if (d->owner != NULL) /* owner alanı NULL değilse */
		free(d->owner);  /* owner için ayrılmış hafızayı serbest bırak */

	free(d);             /* dog_t için ayrılmış hafızayı serbest bırak */
}


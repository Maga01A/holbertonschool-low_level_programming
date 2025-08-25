#include <stdlib.h>   /* malloc ve free için */
#include <string.h>   /* strlen ve strcpy için */
#include "dog.h"      /* struct dog ve prototipler için */

/**
 * new_dog - Yeni bir dog_t oluşturur ve kopyalarını saklar
 * @name: Köpeğin adı
 * @age: Köpeğin yaşı
 * @owner: Köpeğin sahibi
 *
 * Return: Başarılı ise yeni dog_t işaretçisi, başarısız ise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;        /* Yeni dog_t işaretçisi */
	char *name_copy;  /* name için kopya */
	char *owner_copy; /* owner için kopya */

	/* Bellek ayır, başarısızsa NULL döndür */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* name için bellek ayır ve kopyala */
	if (name != NULL)
	{
		name_copy = malloc(strlen(name) + 1);
		if (name_copy == NULL)
		{
			free(d); /* Önce dog_t'yi temizle */
			return (NULL);
		}
		strcpy(name_copy, name);
		d->name = name_copy;
	}
	else
		d->name = NULL;

	/* owner için bellek ayır ve kopyala */
	if (owner != NULL)
	{
		owner_copy = malloc(strlen(owner) + 1);
		if (owner_copy == NULL)
		{
			free(name_copy); /* Önce name kopyasını temizle */
			free(d);         /* sonra dog_t'yi temizle */
			return (NULL);
		}
		strcpy(owner_copy, owner);
		d->owner = owner_copy;
	}
	else
		d->owner = NULL;

	/* Age değerini ata */
	d->age = age;

	return (d); /* Başarılıysa dog_t işaretçisini döndür */
}


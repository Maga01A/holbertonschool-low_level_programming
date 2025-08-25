#include <stdlib.h>  /* malloc ve free için */
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
	dog_t *d;
	char *name_copy;
	char *owner_copy;
	int i, name_len, owner_len;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* name uzunluğunu hesapla */
	name_len = 0;
	if (name != NULL)
	{
		while (name[name_len] != '\0')
			name_len++;
	}

	/* owner uzunluğunu hesapla */
	owner_len = 0;
	if (owner != NULL)
	{
		while (owner[owner_len] != '\0')
			owner_len++;
	}

	/* name için bellek ayır ve kopyala */
	if (name != NULL)
	{
		name_copy = malloc(name_len + 1);
		if (name_copy == NULL)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; i <= name_len; i++)
			name_copy[i] = name[i]; /* '\0' dahil kopyala */
		d->name = name_copy;
	}
	else
		d->name = NULL;

	/* owner için bellek ayır ve kopyala */
	if (owner != NULL)
	{
		owner_copy = malloc(owner_len + 1);
		if (owner_copy == NULL)
		{
			if (d->name != NULL)
				free(d->name);
			free(d);
			return (NULL);
		}
		for (i = 0; i <= owner_len; i++)
			owner_copy[i] = owner[i]; /* '\0' dahil kopyala */
		d->owner = owner_copy;
	}
	else
		d->owner = NULL;

	d->age = age;

	return (d);
}


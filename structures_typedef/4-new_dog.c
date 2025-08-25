#include <stdlib.h>   /* malloc ve free için */
#include <string.h>   /* strlen için */
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
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_copy = malloc(strlen(name) + 1);
		if (name_copy == NULL)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; name[i]; i++)
			name_copy[i] = name[i];
		name_copy[i] = '\0';
		d->name = name_copy;
	}
	else
		d->name = NULL;

	if (owner != NULL)
	{
		owner_copy = malloc(strlen(owner) + 1);
		if (owner_copy == NULL)
		{
			if (d->name != NULL)
				free(d->name);
			free(d);
			return (NULL);
		}
		for (i = 0; owner[i]; i++)
			owner_copy[i] = owner[i];
		owner_copy[i] = '\0';
		d->owner = owner_copy;
	}
	else
		d->owner = NULL;

	d->age = age;

	return (d);
}


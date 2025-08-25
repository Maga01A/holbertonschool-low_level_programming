#include <stdlib.h>
#include "dog.h"

/**
 * str_copy - Bir string'in kopyasını oluşturur
 * @str: Kopyalanacak string
 *
 * Return: Yeni string'in adresi veya NULL
 */
char *str_copy(char *str)
{
	char *copy;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - Yeni bir dog_t oluşturur ve kopyalarını saklar
 * @name: Köpeğin adı
 * @age: Köpeğin yaşı
 * @owner: Köpeğin sahibi
 *
 * Return: Başarılıysa yeni dog_t işaretçisi, başarısızsa NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = str_copy(name);
	if (name != NULL && d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = str_copy(owner);
	if (owner != NULL && d->owner == NULL)
	{
		if (d->name != NULL)
			free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}


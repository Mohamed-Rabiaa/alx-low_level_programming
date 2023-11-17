#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - creates a new dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *
 *Return: a pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);

	return (d);
}

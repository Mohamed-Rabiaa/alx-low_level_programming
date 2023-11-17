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

	if (d == 0)
	{
		return (0);
	}
	if (name != 0)
	{
		d->name = strdup(name);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
	}
	d->age = age;

	if (owner != 0)
	{
		d->owner = strdup(owner);
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
	}

	return (d);
}

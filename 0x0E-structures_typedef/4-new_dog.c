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
		return (0);

	if (name != 0)
		d->name = strdup(name);
	d->age = age;

	if (owner != 0)
		d->owner = strdup(o);

	return (d);
}

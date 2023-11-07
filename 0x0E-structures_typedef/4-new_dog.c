#include "dog.h"
#include <stdlib.h>
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

	if (name == 0 || owner == 0)
		return (0);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}

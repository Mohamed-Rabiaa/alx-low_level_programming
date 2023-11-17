#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - frees dogs
 *@d: the dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}

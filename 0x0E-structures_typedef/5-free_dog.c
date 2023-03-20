#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees memory (struct)
* @d: pointer to a struct
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

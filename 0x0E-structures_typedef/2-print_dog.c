#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints a struct dog
* @d: pointer to the struct dog
*/

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age == 0 || d->owner == NULL)
		printf("(nil)");
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

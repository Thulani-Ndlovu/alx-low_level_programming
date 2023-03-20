#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: a struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *info;

	info = malloc(sizeof(dog_t));

	if (info == NULL)
		return (NULL);
	info->name = name;
	info->age = age;
	info->owner = owner;

	return (info);
}

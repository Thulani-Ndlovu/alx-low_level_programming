#include "dog.h"
#include <stdlib.h>

/**
* _strlen - length of a string
* @str: string
* Return: length of string
*/

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
* _strcpy - copy a string
* @dest: destination string
* @src: source string
* Return: copied string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	info = malloc(sizeof(dog_t));

	if (info == NULL)
		return (NULL);


	info->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (info->name == NULL)
	{
		free(name);
		return (NULL);
	}

	info->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (info->owner == NULL)
	{
		free(info->name);
		free(info);
		return (NULL);
	}

	info->name = _strcpy(info->name, name);
	info->age = age;
	info->owner = _strcpy(info->owner, owner);

	return (info);
}

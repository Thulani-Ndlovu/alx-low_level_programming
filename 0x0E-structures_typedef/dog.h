#ifndef DOG_H
#define DOG_H

/**
* struct dog - structure that holds the info about the dog
* @name: name of the dog
* @age: age of the dog
*
* Description: it contains the name, age and the onwer of the dog.
*/

struct dog
{
	char *name;
	float age;
	/**
	  * @owner: owner of the dog
	  *
	  * Description: information about the dog and its ownership
	  */
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif

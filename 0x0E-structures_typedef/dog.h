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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

#include "dog.h"
/**
 * init_dog - function for initializing the type struct dog
 * @d: the structure declaration of the dog
 * @name: name of the dog
 * @age: the age
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}

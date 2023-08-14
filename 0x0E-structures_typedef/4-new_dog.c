#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: the dog's age
 * @owner: the owner of the dog
 * Return: the pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;
	dog_t *new_dog;

	name_len = strlen(name) + 1;
	owner_len = strlen(owner) + 1;
	/* Allocating memory */

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(name_len);
	new_dog->owner = malloc(owner_len);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	new_dog->age = age;
	return (new_dog);
}

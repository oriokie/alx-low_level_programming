#ifndef MY_P
#define MY_P
#include <stdio.h>
/**
 * struct dog - struct declaration for my dog
 * @name: the name of my dog
 * @age: the age of the dog
 * @ownner: the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

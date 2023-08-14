#include "dog.h"
#include <stdlib.h>

/**
* free_dog -  function that frees memory of the dog function
* @d: dog
**/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

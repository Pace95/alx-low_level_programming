#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free memory dog
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialization of type struct dog
 * @d: pointer to new dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

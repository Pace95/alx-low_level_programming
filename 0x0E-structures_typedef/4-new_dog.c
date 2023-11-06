#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function for a new dog
 * @name: nam of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: pointer for success or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int x, y, z;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; x++)
		;
	x++;
	dog->name = malloc(sizeof(char) * x);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (z = 0; z < x; z++)
		dog->name[z] = name[z];
	dog->age = age;
	for (y = 0; owner[y] != '\0'; y++)
		;
	y++;
	dog->owner = malloc(sizeof(char) * y);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (z = 0; z < y; z++)
		dog->owner[z] = owner[z];
	return (dog);
}

#ifndef DOGH_H
#define DOGH_H
/**
 * struct dog - struct that creates dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of the dog
 * Desc: dog information struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

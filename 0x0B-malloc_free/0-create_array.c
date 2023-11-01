#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creation of array of chars and initialize with char
 * @size: size of array
 * @c: storage of strings of character
 * Return: NULL or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		p[x] = c;
	}
	return (p);
}

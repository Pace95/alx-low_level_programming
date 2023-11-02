#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: memory size
 * Return: 0 Succes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		x[a] = 0;
	return (x);
}

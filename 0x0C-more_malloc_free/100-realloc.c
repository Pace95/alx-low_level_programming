#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of space allocated
 * @new_size: new size for new memory block
 * Return: 0 Success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	unsigned int a, max = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		x = malloc(new_size);
			return (x);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	x = malloc(new_size);
		if (x == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (a = 0; a < max; a++)
		x[a] = oldptr[a];
	free(ptr);
	return (x);
}

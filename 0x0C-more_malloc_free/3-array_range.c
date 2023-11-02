#include "main.h"
#include <stdlib.h>
/**
 * array_range - creation of an array of integer
 * @min: first values store
 * @max: second value store
 * Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int x, z;
	int *a;

	if (min > max)
		return (NULL);
	z = max - min + 1;
	a = malloc(sizeof(int) * z);
	if (a == NULL)
		return (NULL);
	for (x = 0; x < z; x++)
	{
		a[x] = min;
		min++;
	}
	return (a);
}

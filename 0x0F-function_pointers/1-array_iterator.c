#include "function_pointers.h"
/**
 * array_iterator - function that execute another function
 * @size: size of array
 * @array: array
 * @action: pointer to function for use
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(*array);
		array++;
	}
}

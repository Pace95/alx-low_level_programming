#include "function_pointers.h"
/**
 * int_index - function that searches for integer
 * @size: number of elements in an array
 * @array: array in use
 * @cmp: pointer to the function to be used
 * Return: -1 or interger
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		return (x);
	}
	return (-1);
}

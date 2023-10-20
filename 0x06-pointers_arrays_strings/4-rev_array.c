#include "main.h"
/**
 * reverse_array - Reversal of the content of an  array
 * @a: the array
 * @n: number of elements in array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int x,
	    int z;

	for (x = 0; x < n / 2; x++)
	{
		z = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x]  = z;
	}
}

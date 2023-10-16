#include <main.h>
/**
 * swap_int - swapping of values
 * @a: first parameter 
 * @b: second parameter
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

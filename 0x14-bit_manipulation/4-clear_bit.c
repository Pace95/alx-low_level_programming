#include "main.h"
/**
 * clear_bit - function that set the value of a given bit to 0
 * @n: pointer
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	 x = 1;
	 x = x << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
	return (-1);
	if (((*n >> index) & 1) == 1)
		 *n = x ^ *n;
	return (1);
}

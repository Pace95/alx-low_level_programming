#include "main.h"
/**
 * set_bit - set the value of a bit to 1
 * @n: pointer to manipulated bit
 * @index: given index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	x = 1;
	x = x << index;
	*n = ((*n) | x);
	return (1);
}

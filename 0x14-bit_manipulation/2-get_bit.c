#include "main.h"
/**
 * get_bit - a function that the value of bit at a given index
 * @n: value
 * @index: the index inputted
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (x = 0; x < index; x++)
		n = n >> 1;
	return ((n & 1));
}

#include "main.h"
/**
 * get_endianness - function that check the endianness or system byte order
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int x;
	int sb;

	sb = (int) (((char *)&x)[0]);
	return (sb);
}

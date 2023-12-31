#include "main.h"
/**
 * print_bi - print the binaty of a number
 * @n: decimal input
 * Return: Nothing
 */
void print_bi(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - a function that print binary representation of a number
 * @n: variable
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bi(n);
	}
}

#include "main.h"
/**
 * print_last_digit - function for last digit
 *
 * @x: integer
 *
 * Return: n
 */
int print_last_digit(int x)
{
	int n;

	n = x % 10;
	if (n < 0)
		n = -n;
	_putchar (n + '0');
	return (n);
}

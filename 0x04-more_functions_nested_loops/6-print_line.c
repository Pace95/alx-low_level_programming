#include "main.h"
/**
 * print_line - function to draw a straight line
 * @n: parameter for number of times _ will print
 * Return: 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int x;

			for (x = 1; x <= n; x++)
			{
				_putchar('_');
			}
		_putchar('\n');
	}
}

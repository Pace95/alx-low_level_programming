#include "main.h"
/**
 * print_diagonal - function for drawing diagonal line
 * @n: parameter for function
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int y, z;

		for (y = 0; y < n; y++)
		{
			for (z = 0; z < n; z++)
			{
				if (z == y)
					_putchar('\\');
				else if (z < y)
					_putchar(' ');
			}
			_Putchar('\n');
		}
	}
}

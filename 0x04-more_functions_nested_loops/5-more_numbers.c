#include "main.h"
/**
 * more_numbers - ten times number
 * Return: 0
 */
void more_numbers(void)
{
	int x, n;

	for (x = 1; x <= 10; x++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('1');
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}

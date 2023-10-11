#include "main.h"
/**
 * jack_bauer - function for mins of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int x, n;

	for (x = 0; x < 24; x++)
	{
		for (n = 0; n < 60; n++)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar ('\n');
		}
	}
}		

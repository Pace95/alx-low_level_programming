#include "main.h"
/**
 * print_alphabet_x10 - function to print 10x alphabets
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x;
	char aph;

	for (x = 0; x < 10; x++)
	{
		for (aph = 'a'; aph <= 'z'; aph++)
			_putchar(aph);
		_putchar('\n');
	}
}

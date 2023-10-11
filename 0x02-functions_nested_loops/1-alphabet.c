#include "main.h"
/**
 * main - Entry of Alphabets 
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char aph;
	for (aph = 'a'; aph <= 'z'; aph++)
		_putchar(aph);
	_putchar('\n');
}

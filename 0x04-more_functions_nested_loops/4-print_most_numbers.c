#include "main.h"
/**
 * print_most_numbers - print all digits excluding 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	char m;

	for (m = '0'; m <= '9'; m++)
	{
		if (!(m == '2' || m == '4'))
			_putchar(m);
	}
	putchar('\n');

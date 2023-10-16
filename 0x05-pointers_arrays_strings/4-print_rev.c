#include "main.h"
/**
 * print_rev - printing string in reverse
 * @s: the parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int x;
	int c = 0;

	for (x = 0; s[x] != '\0'; x++)
		c++;
	for (x = c - 1; x >= 0; x--)
	_putchar(s[x]);
	_putchar('\n');
}

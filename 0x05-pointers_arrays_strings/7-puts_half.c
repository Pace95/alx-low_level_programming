#include "main.h"
/**
 * puts_half - function to print half of string
 * @str: parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int a, end, c = 0;

	for (a = 0; str[a] != '\0'; a++)
		c++;
	end = (count - 1) / 2;
	for (a = end + 1; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

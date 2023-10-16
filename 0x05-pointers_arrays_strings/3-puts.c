#include "main.h"
/**
 * _puts - prints strings and new line
 * @str: parameter
 * Return: 0
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	_put(str[x]);
	_put('\n');
}

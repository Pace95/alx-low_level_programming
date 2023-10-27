#include "main.h"
/**
 * _strlen - lenth of strings
 * @s: parameter
 * Return: length
 */
int _strlen(char *s)
{
	int z;
	int x = 0;

	for (z = 0; s[z] != '\0'; z++)
		x++;
	return (x);
}

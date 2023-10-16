#include "main.h"
/**
 * rev_string - function to reverse string
 * @s- parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
		x++;
	for (i = 0; i < x / 2; i++)
	{
		char z;

		z = s[i];
		s[i] = s[x - 1 -i];
		s[x - 1 - i] = z;
	}
}

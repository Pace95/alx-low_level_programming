#include "main.h"
/**
 * leet - encoding
 * @x: string
 * Return: x
 */
char *leet(char *x)
{
	int z, s;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (z = 0; x[z] != '\0'; z++)
	{
	for (s = 0; s < 10; s++)
	{
		if (x[z] == a[s])
			x[z] = b[s];
	}
	}
	return (x);
}	

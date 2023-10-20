#include "main.h"
/**
 * string_toupper - function to convert lower cases to upper cases
 * @x: string
 * Return: x
 */
char *string_toupper(char *x)
{
	int n;

	for (n = 0; x[n] != '\0'; n++)
	{
		if (x[n] >= 'a' && x[n] <= 'z')
			x[n] = x[n] - 32;
	}
	return (x);
}

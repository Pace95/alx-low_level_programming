#include "main.h"
/**
 * binary_to_uint - function that convert binary to unsigned int
 * @b: pointer to a string
 * Return: conberted digit or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	size_t x = 0;
	size_t y = 0;
	size_t sum = 0;
       	size_t pow = 1;
	int base = 2;


	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
			return (b[0] - 48);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
		return (0);
		for (y = length - 1; y > 0; y--)
		pow = pow * base;
		sum = sum + (pow * (b[x] - 48));
		length--;
		pow = 1;
	}
	return (sum);
}

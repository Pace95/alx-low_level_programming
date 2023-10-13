#include "main.h"

/**
 * _isupper - funcction to check uppercase alphabets
 * @c: parameter to be checked
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

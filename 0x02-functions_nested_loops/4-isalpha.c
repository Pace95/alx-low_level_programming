#include "main.h"
/**
 * _isalpha - checks for lower and upper alphabets
 *
 * @c: the checked parameter
 *
 * Return: 0 or 1 (Success)
 */
int _isalpha(int c)
{
	if (( c >= 'a' && c <= 'z')  ||	(c >= 'A' && <= 'Z'))
		return (1);
	else 
		return (0);
}

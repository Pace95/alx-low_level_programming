#include "main.h"
/**
 * factorial - factorial of a number
 * @n: given number
 * Return: factorial, 1, or -1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

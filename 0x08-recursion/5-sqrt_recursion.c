#include "main.h"
/**
 * sqrt_a - return natural square root
 * @a: input number
 * @b: iterator
 * Return: natural square root or -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - natural square root of a number
 * @n: given number
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}

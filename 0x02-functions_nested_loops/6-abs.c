#include "main.h"
/**
 * _abs - function to compute absolute value of an integer
 * @x: interger
 * Return: -x or x
 */
int _abs(int x)
{
	int x;

	if (x < 0)
	{
		return (-x);
	}
	else if (x >= 0)
	{
		return (x);
	}
	return (0);
}

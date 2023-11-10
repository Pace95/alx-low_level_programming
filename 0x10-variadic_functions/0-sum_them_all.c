#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters passed
 * @n: number of arguments passed
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int x;

	va_list hold;

	va_start(hold, n);

	for (x = 0; x < n; x++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(hold, const unsigned int);
		}
	}
	va_end(hold);
	return (sum);
}

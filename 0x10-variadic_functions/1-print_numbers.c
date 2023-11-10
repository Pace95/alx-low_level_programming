#include "variadic_functions.h"
/**
 * print_numbers - print numbers and new line
 * @separator: string to be printed
 * @n: numbers of integers passed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x, hold;

	va_list ptr;

	va_start(ptr, n);

	for (x = 0; x < n; x++)
	{
		hold = va_arg(ptr, const unsigned int);
		printf("%d", hold);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}

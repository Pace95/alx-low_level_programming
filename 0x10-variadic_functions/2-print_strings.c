#include "variadic_functions.h"
/**
 * print_strings - print strings and new line
 * @separator: strings to be printted
 * @n: number of strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list strptr;

	va_start(strptr, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(strptr, char *);
		if (str == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", str);
		}
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strptr);
}

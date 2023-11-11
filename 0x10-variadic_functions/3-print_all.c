#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: argument specifier
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int x, stat;
	char *str;

	va_list spc;

	va_start(spc, format);

	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case '1':
				printf("%d", va_arg(spc, int));
				stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				stat = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				stat = 0;
				break;
			default:
				stat = 1;
				break;
		}
		if (format[x + 1] != '\0' && stat == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(spc);
}

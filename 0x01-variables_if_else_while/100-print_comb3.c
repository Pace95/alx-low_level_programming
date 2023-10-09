#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Printing combinations of tw digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = x; y <= 9; y++)
			{
				putchar('0' + x);
				putchar('0' + y);
				if (x != 9 || y != 9)
				{
					putchar(',');
						putchar(' ');
				}
			}
		
	}
	putchar('\n');
	return (0);
}

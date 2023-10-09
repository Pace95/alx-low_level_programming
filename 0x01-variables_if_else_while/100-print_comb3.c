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

	for (x = 28; x <= 36; x++)
	{
		for (y = 29; y <= 37; y++)
		{
			if (x > y)
			{
				putchar(x);
				putchar(y);
				if (x != 36 || y != 37)
				{
					putchar(',');
						putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

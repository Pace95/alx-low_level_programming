#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: 'Possible combinations of two digits'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x !=57)
		{
			putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

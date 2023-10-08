#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description - 'Printing all singles digits of base ten'
 *
 * Return:A;ways 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar("%d", x);
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Printing number zero to nine'
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int x;
	for (x = 0; x <= 9; x++)
	{
		putchar("%d\n", x);
	}
	return (0);
}

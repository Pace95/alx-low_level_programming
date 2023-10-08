#include <stdio.h>
/**
 * main _ Entry Point
 *
 * Description - ' Printing all singles digits of base ten'
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 0;
	do {
		putchar(x);
		x++;}
	while (x <= 9);
	putchar('\n');
	return (0);
}

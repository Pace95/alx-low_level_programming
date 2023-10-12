#include <stdio.h>
/**
 * main - sum of multiples of 5 and 3
 *
 * Return: 0
 */

int main(void)
{
	int s = 0;
	int x;

	for (x = 1; x < 1024; x++)
	{
		if (x % 3 == 0 || X % 5 == 0)
			s = s + x;
	}
	printf("%d\n", s);
}

#include <stdio.h>
/**
 * main - program to find Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int s;
	int l;

	printf("%d, " a);
	for (l = 1; l <= 50; l++)
	{
		printf("%d", b);
		s = a + b;
		a = b;
		b = s;
	}
	printf("\n");
	return (0);
}

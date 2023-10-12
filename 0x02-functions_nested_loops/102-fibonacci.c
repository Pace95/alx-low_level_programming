#include <stdio.h>
/**
 * main - program to find Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int s;
	int l;

	printf("%d, " a);
	for (l = 1; l < 50; l++)
	{
		printf("%lu", b);
		s = a + b;
		a = b;
		b = s;
		if (l != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}

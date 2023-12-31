#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*  main - Entry point
*
*  Description: 'To print last digit of random number'
*
* Return: (0) Success
*/
int main(void)
{
	int n = rand() - RAND_MAX / 2;
	int x = n % 10;

	srand(time(0));
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}

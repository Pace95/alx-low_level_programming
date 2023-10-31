#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - addition of positive numbers
 * @argc: command line
 * @argv: arrays
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	int x, z, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (z = 0; argv[x][z] != '\0'; z++)
		{
			if (!isdigit(argv[x][z]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}

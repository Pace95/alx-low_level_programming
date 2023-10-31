#include <stdio.h>
/**
 * main - prints number of arguments passed in
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 * Return: (0) Success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

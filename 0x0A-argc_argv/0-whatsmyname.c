#include "main.h"
#include <stdio>
/**
 * main - print the name of a programme
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Always (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

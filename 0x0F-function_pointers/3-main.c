#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate on command line
 * @argc: argument count
 * @argv: argument vector
 * Return: results of executed function
 */
int main(int argc, char *argv[])
{
	char *op; /* operator */
	int x1, x2; /* inputs */

	if (argc != 4) /* if argument count is wrong */
	{
		printf("Error\n");
		exit(98);
	}

	/* set cmd argument input */
	x1 = atoi(argv[1]); /* first input */
	x2 = atoi(argv[3]); /* second input */
	op = (argv[2]); /* operator input */

	/* if operator not in operator list */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* if user tries to divide or perform modulus by 0 */
	if ((*op == '/' && x2 == 0) || (*op == '%' && x2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* print results of operation */
	printf("%d\n", get_op_func(op)(x1, x2));
	return (0);
}

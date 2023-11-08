#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition of digits
 * @a: first digit
 * @b: second digit
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -m subtraction of digits
 * @a: first digit
 * @b: second digit
 * Return: Remainder
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of digits
 * @a: first digit
 * @b: second digit
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of digits
 * @a: first digit
 * @b: second digit
 * Return: outcome
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remiander of division of digits
 * @a: first digit
 * @b: second digit
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}

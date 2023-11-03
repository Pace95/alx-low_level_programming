#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define EERR_MSG "Error"
/**
 * is_digit - checking for non-digit char in string
 * @s: evaluated string
 * Return: 0 or 1
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - length of a string
 * @s: evaluated string
 * Return: Lenth of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
	a++;
	}
	return (a);
}

/**
 * error - handle the main errors
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplication of two positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, x, carry, num1, num2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	result = malloc(sizeof(int) * l);
	if (!result)
		return (1);
	for (x = 0; x <= l1 + l2; x++)
		result[x] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		num1 = s1[l] - '0';
		carry = 0;
		for (l2 = l2 - 1; l2 >= 0; l2--)
		{
		num2 = s2[l2] - '0';
		carry += result[l1 + l2 + 1] + (num1 * num2);
		result[l1 + l2 + 1] = carry % 10;
		carry /= 10;
		}
	if (carry > 0)
		result[l1 + l2 + 1] += carry;
	}
	for (x = 0; x < l - 1; x++)
	{
		if (result[x])
			a = 1;
		if (a)
			_putchar(result[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
}

#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: 'Printing upper and lower case alphabets with putchar'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph;
	for (alph = 'a'; alph <= 'z'; alph++)

	{
	putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
	putchar(alph);
	}
	putchar('\n');
	return (0);
}

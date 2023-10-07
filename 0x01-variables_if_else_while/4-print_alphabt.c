#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: 'Printing alphabets omitting q and e'
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}
	putchar('\n');
	return (0);
}

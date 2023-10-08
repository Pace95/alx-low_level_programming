#include <stdio.h>
/**
 * main -Entry Point
 *
 * Description: 'Printing Alphabets Reversely with Putchar'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph = 'z';
	do 
	{
		putchar(alph);
		alph--
	}
	while (alph >= 'a');
	putchar('\n');
	return (0);
}

#include <main.h>
#include <unistd.h>
/**
 * main - Entry Point
 *
 * Description: 'Printing without using the standard library'
 *
 * Return: 0 Success
 */
int main(void)
{
	char word[8] = "_putchar";
	int length;
	for (length = 0; length < 8; length++)
		_putchar(word[length]);
	_putchar('\n');
	return (0);
}

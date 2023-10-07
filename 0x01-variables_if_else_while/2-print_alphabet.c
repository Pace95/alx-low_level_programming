#include <stdio.h>
/**
* main - Entry Point
*
* Description: 'Printing All Alphabets with Putchar'
*
* Return: Always 0 (Success)
*/

int main(void)
{
char alphabet = 'a';
do{
putchar(alphabet);
alphabet++;
}while (alphabet <= 'z');
putchar('\n');
return (0);
}

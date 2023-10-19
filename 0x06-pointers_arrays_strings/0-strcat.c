#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: value one
 * @src: value two
 * Return: Pointer
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int n;

	x = 0;
	while (dest[x] != "\0")
	{
		x++;
	}
	n = 0;
	while (src[n] != "\0")
	{
		dest[x] = src[n];
		x++;
		n++;
	}
	dest[x] = "\0";
	return (dest);
}

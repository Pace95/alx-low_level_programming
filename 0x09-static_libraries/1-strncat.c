#include "main.h"
#include <string.h>
/**
 * _strncat - concatanation of two strings
 * @dest: string one
 * @src: string two
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dl = strlen(dest);
	int x;

	for (x = 0; x < n && *src != '\0'; x++)
	{
		dest[dl + x] = *src;
		src++;
	}
	dest[dl + x] = '\0';
	return (dest);
}

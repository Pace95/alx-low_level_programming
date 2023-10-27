#include "main.h"
/**
 * *_strchr - locting a string
 * @s: character type variable pointer
 * @c: character type variable
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}

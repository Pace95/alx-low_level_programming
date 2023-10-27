#include "main.h"
/**
 *  _strspn - lengths of prefix substring
 *  @s: first segment or string
 *  @accept: second segment or string
 *  Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}

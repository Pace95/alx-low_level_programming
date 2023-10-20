#include "main.h"
/**
 * cap_string - Captilization of all words
 * @x: string
 * Return: x
 */
char *cap_string(char *x)
{
	int n, a;
	char sym[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (n = 0; x[n] != '\0'; n++)
	{
		if (n == 0 && x[n] >= 'a' && x[n] <= 'z')
			x[n] = x[n] - 32;
		for (a = 0; a < 13; a++)
		{
			if (x[n] == sym[a])
			{
				if (x[n + 1] >= 'a' && x[n + 1] <= 'z')
					x[n + 1] = x[n + 1] - 32;
			}
		}
	}
	return (x);
}

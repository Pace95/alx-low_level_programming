#include "main.h"
/**
 * rot13 - encoding with rot 13
 * @x: string
 * Return: encoded sring
 */
char *rot13(char *x)
{
	int s, z;
	char *alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ralph = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (s = 0; x[s] != '\0'; s++)
	{
		for (z = 0; alph[z] != '\0'; z++)
		{
			if (x[s] == alph[z])
			{
				x[s] = ralph[z];
				break;
			}
		}
	}
	return (x);
}

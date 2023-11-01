#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: NULL or pointer to allocated memory
 */
char *_strdup(char *str)
{
	unsigned int x, z;
	char strdest;

	if (str == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (str[x] != '\0')
	{	
		x++;
	}
	strdest = (char *)malloc(sizeof(char) * (x + 1));

	if (strdest == NULL)
	{
		return (NULL);
	}
	for (z = 0; z <= x; x++)
	{
		strdest[z] = str[z];
	}
	return (strdest);

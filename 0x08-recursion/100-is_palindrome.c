#include "main.h"
/**
 * _strlen_recursion - string length
 * @s: given  string
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * _compstr - comparison of string
 * @s: given string
 * @left: smallest interator
 * @right: largest interator
 * Return: int
 */
int _compstr(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + _compstr(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - Palindrome
 * @s: given pointer of a string
 * return:1 or a
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compstr(s, 0, _strlen_recursion(s) - 1));
}

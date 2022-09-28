#include "main.h"
/**
 * _strlen_recursion - get length of string s
 * @s: string to get it's length
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (i++);
	}

	return (0);
}

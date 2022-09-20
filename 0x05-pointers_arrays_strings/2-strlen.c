#include "main.h"

/**
 * _strlen - function to get string length
 * @s: character to test
 * Return: length of s
 *
 */

int _strlen(char *s)
{
	int l;
	int i = 0;

	while (i >= 0)
	{
		if (s[i] != '\0')
			l += 1;
		else
			break;
		i++;
	}

	return (l);

}

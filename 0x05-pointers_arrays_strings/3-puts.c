#include "main.h"
/**
 * _puts - function to swap two integers
 * @str: character to test
 * Return: length of s
 *
 */

void _puts(char *str)
{

	int i = 0;
	int j;

	while (i >= 0)
	{
		j = str[i];
		_putchar (j);
		i++;

		if (*(str + i) == '\0')
			break;
	}

	_putchar ('\n');

}

#include "main.h"

/**
 * print_most_numbers - check if uppercase
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; i++)
		{
			if (j > 10)
			{
				_putchar ('0' + j / 10);

			}
			_putchar ('0' + j % 10);
		}
		_putchar ('\n');
	}
}

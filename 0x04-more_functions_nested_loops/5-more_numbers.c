#include "main.h"

/**
 * more_numbers - print 0 - 14, 10 times
 *
 * Return: Always 0.
 */

void more_numbers(void)
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

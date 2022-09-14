#include "main.h"

/*
 * print_alphabet_x10 - function to print 10x the alphabets
 * Return:0
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		char a;

		for (a = 'a'; a <= 'z'; a++)
			_putchar ('a');
	}
	_putchar ('\n');

}

#include "main.h"
#include <stdlib>

/**
 * print_to_98 - function to print to 98
 * @n: argument passed to the function
 * Return: void
 */

void print_to_98(int n)
{
	if (n == 98)
		putchar (n + '0');
	for (; n < 98; n++)
	{
		if (n < 0)
			n *= -1;
		printf('%d, ', n);
	}

	for (; n > 98; n--)
	{
		printf('%d, ', n);
	}

}

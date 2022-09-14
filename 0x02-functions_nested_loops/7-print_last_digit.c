#include "main.h"

/**
 * print_last_digit - function to print last digit
 * @c: argument passed into funciton
 * Return: last digit
 */

int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;

	return (last_digit);
}

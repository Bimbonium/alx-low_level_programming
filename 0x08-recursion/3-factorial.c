#include "main.h"
/**
 * factorial - function that does what is names says
 * @n: number we need it's factorial
 * This is one of the simpler and easy to understand recursions
 * Return: the factorial of the number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}

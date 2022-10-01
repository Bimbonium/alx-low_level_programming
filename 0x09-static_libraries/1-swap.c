#include "main.h"

/**
 * swap_int - function to swap two integers
 * @a: integer 1
 * @b: integer 2
 */

void swap_int(int *a, int *b)
{

	int c; /* temp integer */

	c = *a;
	*a = *b;
	*b = c;

}

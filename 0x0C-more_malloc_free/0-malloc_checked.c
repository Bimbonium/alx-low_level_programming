#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function to check location to pointer
 * @b: parameter to the function
 * Return: Shouldn't return anything :(
 */

void *malloc_checked(unsigned int b)
{
	int *t;

	t = malloc(b);

	if (t == NULL)
		return (98);

	return (t);
}

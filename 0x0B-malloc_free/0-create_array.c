#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create array and put character c
 * @size: Size of the array
 * @c: character to put into every cell in the array
 * Return: Null if size is 0 or pointer to array failes
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(*a) * size);

	if (a == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
		return (a);

	}
}

#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *list_len - function that returns the length of a list
 *@h: first element in the list
 *Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}

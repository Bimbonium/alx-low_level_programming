#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function to print list of values stored in a singly linked list
 * @h: pointer to the element of the list
 * Return: void
 */

size_t print_list(const list_t *h)
{
	unsigned long i = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}

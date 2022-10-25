#include "lists.h"

/**
 * listint_len - function to find lenght of list
 * @h: pointer to the list nodes
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}

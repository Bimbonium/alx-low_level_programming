#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function to print list of values stored in a singly linked list
 * @h: pointer to the element of the list
 * Return: void
 */

size_t print_list(const list_t *h)
{
	int i;
	list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s", ptr->str);
		ptr = ptr->next;
	}
}

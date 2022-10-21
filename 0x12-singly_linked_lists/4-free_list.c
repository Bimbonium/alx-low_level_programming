#include <stdio.h>
#include <stdlib.h>

/**
 *free list - frees the singly linked list
 *@head: pointer to first element
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

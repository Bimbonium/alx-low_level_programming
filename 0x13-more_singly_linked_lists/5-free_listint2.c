#include "lists.h"

/**
 *free_listint2 - function to free lists
 *@head: pointer to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = *head;
	if (head == NULL || *head == NULL)
		return;

	while (temp != NULL)
	{
		temp2 = *temp;
		free(temp);
		temp = temp2->next;
	}
	temp = NULL;
}

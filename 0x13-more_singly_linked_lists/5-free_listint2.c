#include "lists.h"

/**
 *free_listint - function to free lists
 *@head: pointer to the head node
 */

void free_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = *head;

	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	
	*head = NULL;
}

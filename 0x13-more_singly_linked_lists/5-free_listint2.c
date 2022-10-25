#include "lists.h"

/**
 *free_listint - function to free lists
 *@head: pointer to the head node
 */

void free_listint(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		free(*head);
		*head = temp->next;
	}
	
	*head = NULL;
}

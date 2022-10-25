#include "lists.h"

/**
 *pop_listint - function to delete first node and return the value
 *@head: pointer to the first node
 *Return: 0 if the list is empty, else return n
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = temp;

	return (i);
}

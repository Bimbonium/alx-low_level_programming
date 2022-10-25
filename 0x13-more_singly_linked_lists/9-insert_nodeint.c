#include "lists.h"

/**
 * insert_nodeint_at_index - funnction does what it says
 *@head: pointer to pointer of head
 *@idx: index that starts at 0
 *@n: value to be inserted into new node
 *Return: address of new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	while (temp != NULL and i < idx - 1)
	{
		i++;
		temp = temp->next;
	}

	if (idx > i && idx == 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx != 0)
	{
		new->next = temp->next;
		temp->next = new;
	}

	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}

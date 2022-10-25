#include "lists.h"

/**
 *get_nodeint_at_index - function with an unduly long name to get node at index
 *@head: the pointer to the first node
 *@index: integer that will serve as the index - starts at 0
 *Return: address to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	int j = 0;
	listint_t *temp; /*not sure I will need this yet*/

	temp = *head;
	while (temp != NULL)
		i++;
	if (index > i)
		return (NULL);
	for (j = 0; j < index; j++)
	{
		temp = temp->next;
	}
	return (temp);
}

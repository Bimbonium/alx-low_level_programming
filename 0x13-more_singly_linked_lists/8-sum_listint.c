#include "lists.h"

/**
 *sum_listint - function to get sum of values in the nodes
 *@head: pointer to first node
 *Return: sum of n
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t temp; /*place holder to iterate through the list*/

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

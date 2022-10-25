#include "lists.h"

/**
 *add_nodeint - function that adds node
 *@head: location of first node (pointer)
 *@n: content to be added to the new  node
 *Return: address of the new node or NULL if addition fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function to add node at the beginning of a list
 *@head: former head
 *@str: string to add into the new node
 *Return: address to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	char *str2;
	list_t *new_node;

	for (length; str[length] != '\0'; length++)
	{
		str2[length] = str[length];
	}
	str2[length] = '\0';

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = str;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function to add node at the end
 *@head: The first element in the list (pointer to)
 *@str: string to be inserted into the new node
 *Return: pointer to the new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *new_node;
	int i;

	new_node = malloc(sizeof(list_t));
/*this is the creation of a new node*/
	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	} /*count the length of the string*/

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (strdup(str) == NULL)
	{
		free(new_node);
		return (new_node);
	}


	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new_node;
		return (new_node);
	}

}

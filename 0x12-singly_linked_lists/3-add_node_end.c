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
	list_t *ptr = *head;
	int i;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = malloc(sizeof(list_t));
/*this is the creation of a new node*/
	if (ptr->next == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	} /*count the length of the string*/

	ptr->next->str = strdup(str);
	ptr->next->len = i;
	ptr->next->next = NULL;

	return (ptr->next);
}

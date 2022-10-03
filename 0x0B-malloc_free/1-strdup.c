#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function to duplicate a string using Malloc
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *a;

	if (*str == NULL)
		return (NULL);

	a = malloc(sizeof(*str));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		t[i] = str[i];
	}
	t[i + 1] = '\0';

		return (t);
}

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
	unsigned int str_length;

	if (str == NULL)
		return (NULL);

	for (str_length = 0; str[str_length] != '\0'; str_length++)
	{
	}

	a = malloc(sizeof(char) * str_length + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str_length; i++)
	{
		a[i] = str[i];
	}
	return (a);
}

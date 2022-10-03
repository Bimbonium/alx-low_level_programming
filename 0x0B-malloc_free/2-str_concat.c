#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function to concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the combined string, returns NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k; /* i and j are length of string s1 and s2 respectively*/
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	while (s2[j] != '\0') /* a while loop is a shorter piece of code*/
				 /*to achieve this*/
		j++;

	a = malloc(sizeof(char) * (i + j) + 1);

	if (a == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		a[k] = s1[k];
	}

	for (k = 0; k < j; k++)
	{
		a[i + k] = s2[k];
	}
	a[i + j] = '\0'; /*end the string with the \0*/
	return (a);
}

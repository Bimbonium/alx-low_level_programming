#include "main.h"

/**
 * _strchr - function to return the pointer to the first occurence
 * of char c in string s, or NULL if the character is not found
 * @s : char string to search through
 * @c : char to search for
 * Return: s
 */

char *_strchr(char *s, char c)
{

	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}

#include "main.h"

/**
 * cap_string - function to capitalize first letter of the word
 * when it is separated by some specific delimiters
 * @s: string passed into the function
 * Return: s after capitalization
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n') || (s[i] == ',')
		    || (s[i] == '.')
		    || (s[i] == ';') || (s[i] == '.') || (s[i] == '!') || (s[i] == '?')
		    || (s[i] == '"') || (s[i] == '(') || (s[i] == ')') || (s[i] == '{')
		    || (s[i] == '}'))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}

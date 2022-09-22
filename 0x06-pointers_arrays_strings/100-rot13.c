#include "main.h"

/**
 * rot13 - a simple substitution cipher with 13 place switch
 * @s: character string passed into the function
 * Return: s
 */

char *rot13(char *s)
{

	char upper[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char lower[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; upper[j] != '\0'; j++)
		{
			if (s[i] == upper[j])
			{
				s[i] = lower[j];
				break;
			}
		}
	}
}

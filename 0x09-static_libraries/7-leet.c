#include "main.h"

/**
 * leet - function to change a/A into 4, e/E ito 3 etc
 * @s: char passed into the function
 * Return: s
 */

char *leet(char *s)
{
	char comp_arr[20] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	/* iterate over the char s and compare it to comp_arr*/
	/* if the value is found, then replace with j + 1 */

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; comp_arr[j] != '\0'; j++)
		{
			if (s[i] == comp_arr[j])
			{
				s[i] = comp_arr[j + 1];
				break;
			}
		}
	}
		return (s);
}

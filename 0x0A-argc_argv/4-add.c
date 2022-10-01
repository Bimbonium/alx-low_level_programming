#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define UNUSED(x) (void)(x)

/**
 * _isdigit - function to check if the string is a digit
 * using the standard isdigit function in string.h
 * @s: string to check
 * Return: 1 if digit, 0 if not
 */

int _isdigit(char *s)
{
	int k, l; /* k is a counter, and l is the return value*/

	for (k = 0; k != '\0'; k++)
	{
		if (isdigit(s[k]))
			l = 1;
		else
			l = 0;
	}

	return (l);
}


/**
 * main - function to print number of arguments passed
 * @argc: number of arguments passed
 * @argv: vector of arguments passed
 * Return: 0
 */



int main(int argc, char *argv[])
{
	int i, j = 0; /* i is a counter and j is to house the sum*/


	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (argc > 1 && _isdigit(argv[i]))
			{
				j += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

	printf("%d\n", j);
	}
	return (0);
}

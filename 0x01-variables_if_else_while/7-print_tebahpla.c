#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print letters in reverse
 * I'll use while and a--
 * Return: 0
 */

int main(void)
{
	char a = 'z';

	/*for (a = 'z'; a >= 'a'; a--)*/
	while (a <= 'a')
	{
		putchar(a);
		a--
	}
	putchar('\n');
	return (0);
}

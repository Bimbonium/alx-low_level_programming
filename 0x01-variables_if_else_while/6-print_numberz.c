#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print numbers 0-9
 * Return:0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);

}

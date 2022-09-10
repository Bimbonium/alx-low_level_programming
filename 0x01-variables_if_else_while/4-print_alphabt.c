#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print out lowercase alphabets except q and e
 * I will use a while, break and continue
 * there are defintely other methods
 * Return:0
*/

int main(void)
{

	char a = 'a';

	for (; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);

}

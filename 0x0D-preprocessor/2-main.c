#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the name of the file that calls it
 * Return: 0
 */

int main(void)
{
	/* I could have used argv[0] for this*/
	/* using argv prints the exe file name and not the ".c" file name*/
	printf("%s", __FILE__);

	return (0);
}

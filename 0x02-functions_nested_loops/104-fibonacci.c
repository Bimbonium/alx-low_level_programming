#include <stdio.h>
#include <stdlib.h>

/**
 * main - fibb sequence
 * Return: 0
 */

int main(void)
{
	long int i;
	long int sum = 1;
	long int j = 2;
	long int k;

	printf("%ld, ", sum);
	for (i = 1; i < 98; i++)
	{
		k = sum + j; /* at first run, sum =3*/
		sum = j;
		j = k;
		printf("%ld", sum);

		if (i != 97)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}

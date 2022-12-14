#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to print fibonacci sequence from 1 - 50
 * Return: 0
 */

int main(void)
{
	long int i;
	long int sum = 1;
	long int j = 2;
	long int k;

	printf("%ld, ", sum);
	for (i = 1; i < 50; i++)
	{
		k = sum + j; /* at first run, sum =3*/
		sum = j;
		j = k;
		printf("%ld", sum);
		if (i < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
